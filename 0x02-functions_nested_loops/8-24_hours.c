#include "holberton.h"
/**
*jack_bauer- print time-line
*
*/

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 00 ; h <= 23 ; h++)
	{
		for (m = 00 ; m <= 59 ; m++)
		{
			int digit1 = h / 10;
			int digit2 = h % 10;
			int digit3 = m / 10;
			int digit4 = m % 10;

			_putchar(digit1 + '0');
			_putchar(digit2 + '0');
			_putchar(':');
			_putchar(digit3 + '0');
			_putchar(digit4 + '0');
			_putchar('\n');
		}
	}
}
