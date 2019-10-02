#include "holberton.h"
#include <stdio.h>

/**
* puts_half - prints every other character of a string
* @str : pointer char
*/
void puts_half(char *str)
{
	int a, b, c;

	b = 0;
	while (str[b] != '\0')
		b++;
	c = b;
	b = b / 2;
	if (c % 2 != 0)
	{
		b++;
	}
	for (a = 0; a < c; a++)
	{
		if (a >= b)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');

}
