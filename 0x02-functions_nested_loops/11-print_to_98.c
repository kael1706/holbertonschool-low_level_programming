#include "holberton.h"
/**
*print_to_98 - e
*@n: the start number
*
*/
void print_to_98(int n)
{
for (n ; n < 98 ; n++)
{
	printf("%i, ", n);
}
if (n == 98)
{
	printf("%i", n);
}
else
{
	for (n ; n >= 98 ; n--)
	{
		printf("%i, ", n);
	}
}
}
