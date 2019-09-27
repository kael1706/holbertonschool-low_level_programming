#include <stdio.h>

/**
* main - maximum prime number of 612852475143
*
* Return: 0;
*/
int main(void)
{
	unsigned long long  num = 612852475143;
	long divisor = 1, divisores = 0;

	do {
		if (num % divisor == 0)
		{
			printf("%ld", divisor);
		}
		divisor++;
	} while (divisor <= 2);
	printf("%ld", divisor);
	putchar('\n');

	return (0);
}
