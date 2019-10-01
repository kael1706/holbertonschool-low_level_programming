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
