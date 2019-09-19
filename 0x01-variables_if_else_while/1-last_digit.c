#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastDigitNumber;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigitNumber = n % 10;
printf("Last digit of %d is", n);
if (lastDigitNumber > 5)
{
printf(" %d and is greater than 5\n", lastDigitNumber);
}
else if (lastDigitNumber == 0)
{
printf(" 0 and is 0\n");
}
else if (lastDigitNumber < 6)
{
printf(" %d and is less than 6 and not 0\n", lastDigitNumber);
}
return (0);
}
