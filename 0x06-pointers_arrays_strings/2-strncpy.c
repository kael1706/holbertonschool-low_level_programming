#include "holberton.h"

/**
  * _strncpy - copy a string.
  * @dest: array 1
  * @src: array 2
  * @n: copy limit (bytes)
  * Description: work exactly like strncpy
  * Return: pointer
  */
char *_strncpy(char *dest, char *src, int n)
{
	int pos = 0;

	while (src[pos] != 0 && pos < n)
	{
		dest[pos] = src[pos];
		pos++;
	}

	while (pos < n)
	{
		dest[pos] = '\0';
		pos++;
	}

	return (dest);
}
