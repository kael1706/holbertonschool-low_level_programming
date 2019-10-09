#include "holberton.h"

/**
*_puts_recursion - print string using recursion
*@s: char;
*
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
