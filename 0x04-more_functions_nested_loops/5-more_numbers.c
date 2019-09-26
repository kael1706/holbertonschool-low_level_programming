#include "holberton.h"

/**
*more_numbers - print numbers 0-14, 10 times
*/
void more_numbers(void)
{
	int i, j;
	char hola[21] = "01234567891011121314";

	j = 0;

	while (j < 10)
	{
		for (i = 0; i < 20; i++)
		{
			_putchar(hola[i]);
		}
		j++;
		_putchar('\n');
	}
}
