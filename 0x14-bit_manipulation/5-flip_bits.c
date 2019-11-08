#include "holberton.h"

/**
* countb - counts bts
* @n: number
* Return: bits
*/
int countb(int n)
{
	int count = 0;

	while (n)
	{
		count = count + (n & 1);
		n = n >> 1;
	}
	return (count);
}

/**
  * flip_bits - get the number of bits
  * that i need flip
  * @n: number
  * @m: value to compare
  * Return: count
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countb(n ^ m));
}

