#include "holberton.h"

/**
  * get_endianness -checks endianness
  * Return: 1 || 0
  */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *)&a;
	if (*c)
		return (1);
	else
		return (0);
}

