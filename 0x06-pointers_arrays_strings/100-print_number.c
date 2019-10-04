#include "holberton.h"

/**
* print_number - print integer.
* @n: integer
*/
void print_number(int n)
{
	unsigned int negative;

	if (n < 0)
	{
	negative = -n;
	_putchar('-');
	if (negative >= 10)
		print_number(negative / 10);
	_putchar(negative % 10 + '0');
	}
	else if (n >= 0)
	{
	if (n >= 10)
		print_number(n / 10);
	_putchar (n % 10 + '0');
	}
}
