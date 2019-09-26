#include "holberton.h"

/**
*print_diagonal - print diagonal line with n distance
*@n: distance
*
*/
void print_diagonal(int n)
{
	int i = 0;
	char diagonal = '\\';
	char spaces = ' ';

	if (n == 0 || n < 0)
	{
	_putchar('\n');
	}
	else
	{
	while (i < n)
	{
	int j = 0;

	while (j < i)
	{
	_putchar(spaces);
	j++;
	}
	_putchar(diagonal);
	_putchar('\n');
	i++;
	}
	}
}
