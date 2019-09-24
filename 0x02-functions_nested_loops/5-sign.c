#include "holberton.h"

/**
*print_sign - show the sign
*  @n: the character for scanning
*  Return: 1-> (+)number, 0-> 0
*  -1-> (-)number
*
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
