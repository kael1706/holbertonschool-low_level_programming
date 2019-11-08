#include "holberton.h"

/**
  * set_bit - put value of a bit to 1 at a given index
  * @n: pointer number
  * @index: index to set bit
  * Return: 1 || -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	int nBits = 8;
	unsigned long int c_binary = 1;

	nBits = (sizeof(n) * nBits) - 1;
	if (index > 64)
		return (-1);
	c_binary = 1 << index;
	*n = (*n) | c_binary;
	return (1);
}

