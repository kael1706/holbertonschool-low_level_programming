#include "holberton.h"

/**
* _strncat - concatenate a array with other.
* @dest: array 1
* @src: array 2
* @n: copy limit (bytes)
*
* Description: the information in array2
* is add to array1
* Return: pointer
*/
char *_strncat(char *dest, char *src, int n)
{

	int pos = 0;
	int  j = 0;

	while (dest[pos] != '\0')
	{
	pos++;
	}
	while (src[j] != 0 && n--)
	{
	dest[pos + j] = src[j];
	j++;
	}
	dest[pos + j] = '\0';
	return (dest);
}
