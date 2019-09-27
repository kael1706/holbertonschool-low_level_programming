#include "holberton.h"

/**
 *print_triangle - print triangle per size
 *@size: distance
 */
void print_triangle(int size)
{
int linea, limit;
char numeral = '#';
char spaces = ' ';
int i = 0;
if (size == 0 || size < 0)
{
_putchar('\n');
}
else
{
while (i < size)
{
limit = size - i;
linea = 1;
while (linea <= size)
{
if (linea < limit)
{
_putchar(spaces);
}
else
{
_putchar(numeral);
}
linea++;
}
i++;
_putchar('\n');
}
}
}
