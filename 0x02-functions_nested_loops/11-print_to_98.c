#include <stdio.h>
#include "holberton.h"
/**
*print_to_98 - e
*@n: the start number
*
*/
void print_to_98(int n)
{
	if (n < 98)
	{
	for (n = n ; n < 98 ; n++)
	{
	printf("%i, ", n);
	}
	}

	if (n > 98)
	{
	for (n = n ; n > 98 ; n--)
	{
	printf("%i, ", n);
	}
	}
	if (n == 98)
	{
	printf("%i", n);
	}
	printf("\n");
}
