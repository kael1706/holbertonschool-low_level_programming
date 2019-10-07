#include "holberton.h"

/**
* _memset - fill memory .
* @s: pointer
* @b: hexadecimal number
* @n: n bytes
* Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n-- > 0 && i != n)
		*s++ = b;
		i++;
	return (s);
}

