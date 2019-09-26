#include "holberton.h"

/**
*_isdigit - detect if is uppercase
*@c: the character for scanning
*Return: 0 -> !digit, 1 -> digit
*
*/
int _isdigit(int c)
{
	int resp;

	if (c > 47 && c < 58)
	{
		resp = 1;
	}
	else
	{
		resp = 0;
	}
	return (resp);
}
