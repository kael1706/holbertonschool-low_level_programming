#include "holberton.h"

/**
*more_numbers - print numbers 0-14, 10 times
*/
void more_numbers(void)
{
	char dig1, dig2;
	int nLines = 0;
	int i, j;
	char hola[21] = "01234567891011121314";

	j = 0;

	while (j < 10)
	{
		for (int i = 0; i < 21; i++)
		{
			putchar(hola[i]);
		}
		j++;
		_putchar('\n');
	}
}
