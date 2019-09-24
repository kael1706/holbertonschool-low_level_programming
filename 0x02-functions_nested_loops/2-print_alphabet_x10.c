#include "holberton.h"

/**
* print_alphabet_x10 - print alphabet x10
*/
void print_alphabet_x10(void)
{
	char letter;
	int nLines = 0;

	while (nLines < 10)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	}
	_putchar('\n');
	nLines++;
														}
}
