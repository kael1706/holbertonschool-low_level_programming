#include <stdio.h>

/**
* main - maximum prime number of 612852475143
*
* Return: 0;
*/
int main(void)
{
	unsigned long  num = 612852475143;
	long divisor = 1;
	unsigned long answer;

	do {
		if (num % divisor == 0)
		{
		answer = divisor + 0;
		}
		divisor++;
	} while (divisor <= 2);
	printf("%ld", answer);
	putchar('\n');

	return (0);
}
