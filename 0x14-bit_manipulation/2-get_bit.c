#include "holberton.h"

/**
  * get_bit - get a bit related with index.
  * @n: number.
  * @index: position search.
  *
  * Return: bit || -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int error = -1;
	if (index > 64)
		return (error);
	if (n & (1 << (index)))
		return (1);
	else
		return (0);
}

