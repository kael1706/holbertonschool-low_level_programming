#include "3-calc.h"

/**
* get_op_func - manage the option
* @s: symbol of operator (string)
*
* Return: int
*/
int (*get_op_func(char *s))(int, int)
{
	int pos = 0;

	op_t ops[] = {{"+", op_add}, {"-", op_sub},
		{"*", op_mul}, {"/", op_div},
		{"%", op_mod}, {NULL, NULL}};

	while (ops[pos].op)
	{
		if (!(strcmp(ops[pos].op, s)))
		{
			return (ops[pos].f);
		}
		pos++;
	}
	return (NULL);
}
