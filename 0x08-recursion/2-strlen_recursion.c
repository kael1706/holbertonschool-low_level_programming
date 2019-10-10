#include "holberton.h"

/**
*_strlen_recursion - know length
*@s: char
*
*/
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
