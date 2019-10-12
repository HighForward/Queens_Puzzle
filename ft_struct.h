 #ifndef FT_STRUCT_H
# define FT_STRUCT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *s);
int ft_checkstring(char *s);
int **ft_memalloc(int size);
int **ft_fillboard(int **board, int size);
void ft_displayboard(int **board, int size);
int ft_isqueenligne(int **board, int j, int i);
int ft_isqueendiago(int **board, int size, int j, int i);
void ft_displaycharboard(int **board, int size);

#endif
