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
int r, m;

for (m = 0 ; needle[m] != '\0'; m++)
{
for (r = 0 ; haystack[r] != '\0'; r++)
{
if (haystack[r] == needle[m])
{
return (haystack + r);
}
}
}
return (0);
}
