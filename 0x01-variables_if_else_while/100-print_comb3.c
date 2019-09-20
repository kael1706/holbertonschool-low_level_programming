#include <stdio.h>

/**
 *   main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
int a;
int b;
/* ab, ab, ab, ab...*/
for (a = 48 ; a <= 57 ; a++)
{
for (b = 48 ; b <= 57 ; b++)
{
if (a < b)
{
putchar (a);
putchar (b);

if ((a == 56 && b == 57) == 0)
{
putchar (',');
putchar (' ');
}
}

}
}
putchar('\n');
return (0);
}
