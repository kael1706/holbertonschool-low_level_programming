#include <stdlib.h>

/**
*_strlen_recursion - know length
*@s: char
*
*/
int _strlen_recursionk(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (_strlen_recursionk(s + 1) + 1);
	}
}

/**
* argstostr - concatenates all the arguments given
* @ac: number of arguments
* @av: arguments
* Return: pointer to concatenated arguments
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, newSize = 0;
	char *newStr;

	if (ac == 0 || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
		newSize += _strlen_recursionk(av[i]);
	newStr = malloc(((newSize + ac + 1)) * sizeof(char));
	if (!newStr)
		return (NULL);
	for (i = 0; i < newSize;)
	{
		for (j = 0; j < ac; j++, i++)
		{
			for (k = 0; k < _strlen_recursionk(av[j]); k++, i++)
			{
				newStr[i] = av[j][k];
			}
			newStr[i] = '\n';
		}
	}
	newStr[i] = '\0';
	return (newStr);
}
