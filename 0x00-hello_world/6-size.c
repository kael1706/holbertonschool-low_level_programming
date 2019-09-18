#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* lu es para enteros o largos indefinidos*/
printf("Size of a char: %lu 1 byte(s)", sizeof(char));
printf("Size of an int: %lu 4 byte(s)", sizeof(int));

printf("Size of a long int: %lu 8 byte(s)", sizeof(long));
printf("Size of a long long int: %lu 8 byte(s)", sizeof(long long));

printf("Size of a float: %lu 4 byte(s)", sizeof(float));
return (0);
}
