#include "variadic_functions.h"

/**
*print_strings - print all the words you pass
*@separator: separator between strings (string)
*@n: number of past strings
*@...: must be string
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *s;
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
	s = va_arg(valist, char*);

	if (s != NULL)
	{
		printf("%s", s);
	}
	else
	{
		printf("(nil)");
	}
	}
		printf("\n");
	}
	/* clean memory reserved*/
	va_end(valist);
}
