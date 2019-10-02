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
char a;
while (s[j] != '\0')
j = j + 1;
for (i = 0; i < j / 2; i++)
{
a = s[i];
s[i] = s[j - i - 1];
s[j - i - 1] = a;
}
}
