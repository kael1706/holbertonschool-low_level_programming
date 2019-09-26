#include "holberton.h"

/**
*print_line - print lines
*@n:the limit of lines
*/
void print_line(int n)
{
	int i = 0;
	char line = '_';

	if (n == 0 || n < 0)
	{
	_putchar('\n');
	}
	else
	{
	while (i < n)
	{
	_putchar(line);
	i++;
	}
	_putchar('\n');
	}
}
