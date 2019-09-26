#include "holberton.h"
/**
*print_square - print square of n*n
*@size: size of square
*/
void print_square(int size)
{
	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		char square[size][size];
		int i, j;

		for (i = 0; i < size; ++i)
		{
			for (j = 0; j < size ; ++j)
			{
				square[i][j] = '#';
				_putchar(square[i][j]);
			}
			_putchar('\n');
		}
	}
}

