#include "holberton.h"

/**
*status - detect status
*@s: array
*@changue: int
*
*Return: int
*/
int status(char *s, int changue, int j)
{
	if (s[j] == ' ')
		changue = 0;
	else if (s[j] == '\t')
		changue = 0;
	else if (s[j] == '\n')
		changue = 0;
	else if (s[j] == ',')
		changue = 0;
	else if (s[j] == ';')
		changue = 0;
	else if (s[j] == '.')
		changue = 0;
	else if (s[j] == '!')
		changue = 0;
	else if (s[j] == '?')
		changue = 0;
	else if (s[j] == '"')
		changue = 0;
	else if (s[j] == '(')
		changue = 0;
	else if (s[j] == ')')
		changue = 0;
	else if (s[j] == '{')
		changue = 0;
	else if (s[j] == '}')
		changue = 0;
	else
		changue = changue + 1;
	return (changue);
}

/**
  * *cap_string - capitalizes the first letter of
  * words
  * @s: string
  * Return: string capitalized
  */
char *cap_string(char *s)
{
	int j;
	int changue = 0;

	for (j = 0; s[j] != 0; j++)
	{
		status(s, changue, j);
		if (changue == 1 && (s[j] >= 'a' && s[j] <= 'z'))
			s[j] = s[j] - 32;
	}
	return (s);
}
