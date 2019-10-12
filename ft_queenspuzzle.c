#include "ft_struct.h"

int ft_eight_queens_puzzle(int **chessboard, int size, int i)
{
	int queen;
	int j;

	j = 0;
	queen = 1;

	if (i == size)
		return(1);

	while(j < size)
	{
		if(ft_isqueenligne(chessboard, j, i) && ft_isqueendiago(chessboard, size, j, i))
		{
			chessboard[j][i] = queen;
			if(ft_eight_queens_puzzle(chessboard, size, i + 1))
				return(1);
			else
				chessboard[j][i] = 0;
		}
		j++;
	}	
	return(0);
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		if(argc < 2)
			printf("Missing value");
		if(argc > 2)
			printf("Too much values");
		return(0);
	}
	else
	{
		int size;
		char *nb;
		int **chessboard;
		int i;
		i = 0;
		
		nb = argv[1];
		if(ft_checkstring(nb))
		{
			printf("Bad value, only digit");
			return(0);
		}
		if(!(size = ft_atoi(nb)))
		{
			printf("Please take a value between 2 and 50");
			return(0);
		}
		chessboard = ft_memalloc(size);
		chessboard = ft_fillboard(chessboard, size);
		ft_eight_queens_puzzle(chessboard, size, i);
		ft_displayboard(chessboard, size);
		write(1, "\n", 1);
		ft_displaycharboard(chessboard, size);
	}
}
