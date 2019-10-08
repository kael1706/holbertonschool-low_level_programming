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
	int a;
	int b = 0;

	while (needle[b])
	{
		for (a = 0 ; haystack[a]; a++)
		{
			if (haystack[a] == needle[b])
			{
				return (haystack + a);
			}
		}
		b++;
	}
	return (0);
}
