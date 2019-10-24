#include "3-calc.h"

/**
*op_add - add
*@a: int
*@b: int
*
*Return: answer (int)
*/
int op_add(int a, int b)
{
	int answer = a + b;

	return (answer);
}

/**
*op_sub - subtraction
*@a: int
*@b: int
*
*Return: answer (int)
*/
int op_sub(int a, int b)
{
	int answer = a - b;

	return (answer);
}

/**
*op_mul - multiplication
*@a: int
*@b: int
*
*Return: answer (int)
*/
int op_mul(int a, int b)
{
	int answer = (a * b);

	return (answer);
}

/**
*op_div - division
*@a: int
*@b: int
*
*Return: answer (int)
*/
int op_div(int a, int b)
{
	if (b  == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
*op_mod - module
*@a: int
*@b: int
*
*Return: answer (int)
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
