#include "holberton.h"

/**
* rot13 - encode with rot13.
* @s: txt
* Return: coded txt
*/

char *rot13(char *s)
{
	char key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char msj[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int y = 0;

	while (s[i] != 0)
	{
		while (msj[y] != 0)
	{
		if (s[i] == msj[y])
		{
			s[i] = key[y];
			break;
		}
		y++;
	}
	i++;
	}
	return (s);
}
