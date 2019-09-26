#include "holberton.h"
/**
* print_square - print square of n*n
* @n: distance
*/
void print_square(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		char square[n][n];
		int i, j;

		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n ; ++j)
			{
				square[i][j] = '*';
				_putchar(square[i][j]);
			}
			_putchar('\n');
		}
	}
}
