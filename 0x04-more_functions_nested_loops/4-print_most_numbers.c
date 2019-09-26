#include "holberton.h"

/**
*print_most_numbers - print numbers 0-9 without 2,4
*/
void print_most_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number != '2' && number != '4')
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}
