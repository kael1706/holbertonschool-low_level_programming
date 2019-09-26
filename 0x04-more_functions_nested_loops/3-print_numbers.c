#include "holberton"

/**
* print_numbers - print numbers 0-9
*/
void print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
	_putchar(number);
	}
	_putchar('\n');
}
