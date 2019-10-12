#include "ft_struct.h"

void ft_displaycharboard(int **board, int size)
{
	int i;
	int j;

	j = 0;
	while(j < size)
	{
		i = 0;
		while(i < size)
		{
			if(board[j][i] == 1)
				write(1, "X", 1);
			else
				write(1, ".", 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int ft_isqueendiago(int **board, int size, int j, int i)
{	
	int ligne;
	int colone;

	ligne = j - 1;
	colone = i - 1;
	while(ligne != - 1 && colone != - 1)
	{
		if(board[ligne][colone] == 1)
			return(0);
		ligne--;
		colone--;
	}

	ligne = j + 1;
	colone = i - 1;
	while(ligne < size && colone != - 1)
	{
		if(board[ligne][colone] == 1)
			return(0);
		ligne++;
		colone--;
	}
	return(1);
}
int ft_isqueenligne(int **board, int j, int i)
{
	int colone;
	
	colone = 0;

	while(colone < i)
	{
		if(board[j][colone] == 1)
			return(0);
		colone++;
	}
	return(1);
}

void ft_displayboard(int **board, int size)
{
	int j;
	int i;

	j = 0;
	while(j < size)
	{	
		i = 0;
		while(i < size)
		{
			printf("%d", board[j][i]);
			i++;
		}
		j++;
		printf("\n");
	}
}

int **ft_fillboard(int **board, int size)
{
	int i;
	int j;

	j = 0;
	while(j < size)
	{
		i = 0;
		while(i < size)
		{
			board[j][i] = 0;
			i++;
		}
		j++;
	}
	return(board);
}

int **ft_memalloc(int size)
{
	int i;
	int **tab;

	i = 0;
	tab = (int**)malloc(sizeof(int*) * size);
	
	while(i < size)
	{
		tab[i] = (int*)malloc(sizeof(int) * size);
		i++;
	}
	return(tab);
}

int ft_checkstring(char *s)
{
	int i;

	i = 0;
	while(s[i])
	{
		if(s[i] < 48 || s[i] > 57)
			return(1);
		i++;
	}
	return(0);
}

int ft_atoi(char *s)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	while(s[i])
	{
			nb = (nb * 10) + (s[i] - 48);
			i++;
	}
	if(nb > 1 && nb <= 50) 
		return(nb);
	else
		return(0);
}
