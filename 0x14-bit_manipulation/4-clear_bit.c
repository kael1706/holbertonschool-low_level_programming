#include "holberton.h"

/**
  * clear_bit - put value bit with 0
  * @n: pointer number
  * @index: position for 0
  * Return: 1 || -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int nBits = 8;
	nBits = (sizeof(n) * nBits) - 1;
	if (index >= nBits)
		return (-1);
	if (n)
		*n &= ~(1 << index);
	else
		return (0);
	return (1);
}

