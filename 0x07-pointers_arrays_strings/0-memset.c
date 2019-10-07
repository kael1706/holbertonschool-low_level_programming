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
	while (n-- > 0)
		*s++ = b;
	return (s);
}

