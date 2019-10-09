#include "holberton.h"

/**
* _strstr - locates a substring.
* @haystack: char array
* @needle: char array (keyword)
*
* Return: array
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *duplicate = haystack;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (!*needle)
		{
			return (duplicate);
		}
		haystack = duplicate + 1;
	}
	return (0);
}
