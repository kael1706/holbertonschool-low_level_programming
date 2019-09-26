#include "holberton.h"

/**
*_isupper - detect if is uppercase
*@c: the character for scanning
*Return: 0 -> lowercase, 1 -> uppercase
*
*/
int _isupper(int c)
{
	int resp;

	if (c > 64 && c < 91)
	{
	resp = 1;
	}
	else
	{
	resp = 0;
	}
	return (resp);
}
