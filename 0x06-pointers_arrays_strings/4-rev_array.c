#include "holberton.h"

/**
* reverse_array - array ^-1
* of integers
* @a: array
* @n: size array
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int posInv;

	while (i < n)
	{
		posInv = n - 1;
		temp = a[i];
		a[i] = a[posInv];
		a[posInv] = temp;
		n--;
		i++;
	}
}
