#include "holberton.h"
/**
  * print_square - print square of n*n
  * @n: distance
  */
void print_square(int n)
{
	char square[n][n];
	int i, j;

	for (i = 0; i < n; ++i)
	{
	for (j = 0; j < n ; ++j)
	{
	square[i][j] = '*';
	putchar(square[i][j]);
	}
	printf("\n");
	}
}
