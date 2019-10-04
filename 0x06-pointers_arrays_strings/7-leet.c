#include "holberton.h"

/**
* leet - encode a string into 1337.
* @s: string
* Return: coded text
*/
char *leet(char *s)
{
	int t, pos;

	t = 0;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	while (s[t] != 0)
	{
		pos = 0;
	while (l[pos] != 0)
	{
		if (s[t] == l[pos])
			s[t] = n[pos];
			pos++;
	}
		t++;
	}

	return (s);
}
