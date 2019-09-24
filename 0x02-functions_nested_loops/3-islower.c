#include "holberton.h"

/**
*_islower - detect if is lowercase
*@c: the character for scanning
*Return: 0 -> uppercase, 1 -> lowercase
*
*/
int _islower(int c)
{
	int resp;

	if (c > 96 && c < 123)
	{
		resp = 1;
	}
	else
	{
		resp = 0;
	}

	return (resp);

}
