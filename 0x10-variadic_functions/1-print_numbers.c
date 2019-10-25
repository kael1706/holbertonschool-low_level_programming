#include "variadic_functions.h"

/**
*print_numbers - print  arguments of numbers
*@separator: separator between numbers (string)
*@n: number of past numbers
*@...: must be integers
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	/* initialize valist*/
	va_start(valist, n);
	if (separator != NULL)
	{
	/* access each argument of valist */
	for (i = 0; i < n; i++)
	{
	if (i != 0)
	{
		printf("%s", separator);
	}
	printf("%d", va_arg(valist, int));
	}
	printf("\n");
	}
	/* clean memory reserved*/
	va_end(valist);
}
