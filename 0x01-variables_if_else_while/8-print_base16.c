#include <stdio.h>

/**
 *   main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
char letters;
for (letters = '0' ; letters <= '9' ; letters++)
{
putchar(letters);
}
for (letters = 'a' ; letters <= 'f' ; letters++)
{
putchar(letters);
}
putchar ('\n');
return (0);
}
