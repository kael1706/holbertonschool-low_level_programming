#include <stdio.h>
#include <stdlib.h>

/**
*_isdigit - detect if is uppercase
*@c: the character for scanning
*Return: 0 -> !digit, 1 -> digit
*
*/
int _isdigit(int c)
{
	int resp;

	if (c > 47 && c < 58)
	{
		resp = 1;
	}
	else
	{
		resp = 0;
	}
	return (resp);
}

/**
* main - sum operation (only positive)
* @argc: number of arguments
* @argv: arguments
* Return: sum result
*/
int main(int argc, char *argv[])
{
	unsigned int r = 0;
	int i = 1;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (_isdigit(*argv[i]) == 1)
		{
			r = r + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", r);
	return (0);
}
