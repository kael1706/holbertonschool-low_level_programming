#include "holberton.h"

/**
* _strspn - get the length of sub-text
* of a prefix substring.
* @s: char array
* @accept: char array
* Return: break position
*/
unsigned int _strspn(char *s, char *accept)
{
	int letter, pos;

	for (pos = 0; s[pos]; pos++)
	{
		for (letter = 0; accept[letter]; letter++)
		{
			if (accept[letter] == s[pos])
			{
				break;
			}
		}
		if (!accept[letter])
		{
			break;
		}
	}
	return (pos);
}
