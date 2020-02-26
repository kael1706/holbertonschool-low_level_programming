#include "holberton.h"
#include <stdio.h>

/**
*rev_string - string^-1
*@s: char
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
		i++;
	for(j=0; i < j; j++)
	{
		s[j] = s[i];
		i--;
	}

}
