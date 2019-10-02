#include "holberton.h"

/*
*puts2 - prints every other character of a string
*@str: string to print
*/
void puts2(char *str)
{
	char s;
	int c = 0;

	while (str[c] != 0)
	{
		if (c % 2 == 0)
		{
			s = str[c];
			_putchar(s);
		}
		c++;
	}
	_putchar('\n');
}

