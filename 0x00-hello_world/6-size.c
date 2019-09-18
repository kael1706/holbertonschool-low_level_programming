#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long c;
long long d;
float e;

/* lu es para enteros o largos indefinidos*/
printf("Size of a char: %lu 1 byte(s)", sizeof(a));
printf("Size of an int: %lu 4 byte(s)", sizeof(b));

printf("Size of a long int: %lu 8 byte(s)", sizeof(c));
printf("Size of a long long int: %lu 8 byte(s)", sizeof(d));

printf("Size of a float: %lu 4 byte(s)", sizeof(e));
return (0);
}
