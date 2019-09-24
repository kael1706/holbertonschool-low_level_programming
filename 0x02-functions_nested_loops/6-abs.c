#include "holberton.h"
/**
*  _abs - return |n|
*  @n: is a integer
*  Return: (int) n
*
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
