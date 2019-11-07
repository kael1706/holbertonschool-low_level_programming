#include "holberton.h"

/**
  * print_binary - print binary (representation)
  * @n: number
  */
void print_binary(unsigned long int n)
{
	int nBits = 8;
	unsigned long int answer = 0, c_binary = 1;

	nBits = (sizeof(n) * 8) - 1;
	/**
	  * 10000000000000000000000000000000
	  * 2147483648
	  */
	c_binary = c_binary << nBits;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/**
	  * avoid left zeros, and take a step to the right.
	  * and get the number of digits
	  */
	while (!(n & c_binary))
		c_binary = c_binary >> 1;
	for (; c_binary; c_binary = c_binary >> 1)
	{
		answer = n & c_binary;
		if (answer)
			_putchar('1');
		else
			_putchar('0');
	}
}

