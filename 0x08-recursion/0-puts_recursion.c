#include "holberton.h"

/**
*_puts_recursion - print string using recursion
*@s: char;
*
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		char *tmpNext = (s + 1);

		_puts_recursion(tmpNext);
	}
	else if (!*s)
	{
		_putchar('\n');
		return;
	}
}
