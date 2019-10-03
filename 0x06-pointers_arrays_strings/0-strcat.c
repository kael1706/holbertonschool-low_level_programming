#include "holberton.h"

/**
*_strcat - concatenate a array with other.
* @dest: array 1
* @src: array 2
*
* Description: the information in array2
* is add to array1
* Return: pointer
*/
char *_strcat(char *dest, char *src)
{
	int j = 0;
	int i = 0;
	int pos = 0;

	while (dest[i] != '\0')
	{
	i++;
	}

	while (src[j] != 0)
	{
	pos = i + j;
	dest[pos] = src[j];
	j++;
	pos = pos + 1;

	}

	dest[pos] = '\0';

	return (dest);
}
