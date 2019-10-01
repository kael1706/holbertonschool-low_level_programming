#include "holberton.h"

/**
*_strlen - returns the length of a string
*@s: string
*
*Return: int (size of string)
*/
int _strlen(char *s)
{
	int letter = 0;

	while (s[letter] != '\0')
	{
		letter++;
	}
	return (letter);
}

/**
  *print_rev - reverse the text
  *@str: string
  *
  */
void print_rev(char *str)
{
	int i = 0;

	i = _strlen(str);

	while (i > 0)
	{
		i--;
		_putchar(str[i]);
	}
	_putchar('\n');
}

