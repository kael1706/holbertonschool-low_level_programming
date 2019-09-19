#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
int n;
int lastDigitNumber;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigitNumber = n % 10;
if (n < 6)
{
printf("last digit of %d is %d and is less than 6 and not 0\n",
n, lastDigitNumber);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigitNumber);
}
else if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigitNumber);
}
return (1);
}
