#include "holberton.h"

/**
* rot13 - encode with rot13.
* @s: txt
* Return: coded txt
*/
char *rot13(char *s)
{
	char key1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char key2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;


	for (i = 0; s[i] != 0; i++)
	{
	for (j = 0; key1[j] != 0; j++)
	{
		if (s[i] == key1[j])
	{
		s[i] = key2[j];
		break;
	}
	}
	}
	return (s);
}
