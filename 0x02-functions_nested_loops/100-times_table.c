void print_times_table(int n)
{
int i, j;

if (!(n > 15 || n < 0))
{
for (i = 0 ; i < n + 1 ; i++)
{
for (j = 0 ; j < n + 1 ; j++)
{
int answer = i * j;

if (answer == 0)
{
if (j != 0)
{
_putchar(',');
_putchar('.');
_putchar('.');
_putchar('.');
}
printf("%i", 0);
}
else if (answer < 10)
{
_putchar(',');
_putchar('.');
_putchar('.');
_putchar('.');
printf("%i", answer);
}
else if (answer <= 99)
{
_putchar(',');
_putchar('.');
_putchar('.');
printf("%i", answer);
}
else
{
_putchar(',');
_putchar('.');
printf("%i", answer);
}
}
_putchar('\n');
}
}
}
