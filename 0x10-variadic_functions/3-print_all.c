#include "variadic_functions.h"

/**
* count_t - count the valid types
* @types: input string
*
*Return: int (count)
*/
int count_t(const char *types)
{
	int j = 0, k = 0;

	while (types[j])
	{
	switch (types[j])
	{
	case 'c':
		k++;
		break;
	case 'i':
		k++;
		break;
	case 'f':
		k++;
		break;
	case 's':
		k++;
		break;
	}
		j++;
	}
	return (k);
}

/**
* print_all - print value
* @format: type of value
* @...: value
*
*/
void print_all(const char * const format, ...)
{
	va_list valist;
	int ntypes = 0, pos = 0, separator = 0;
	char *word;

	va_start(valist, format);
	ntypes = count_t(format);
	while (format[pos])
	{
	switch (format[pos])
	{
	case 'c':
		printf("%c", va_arg(valist, int));
		ntypes = ntypes - 1, separator = 17;
	break;
	case 'i':
		printf("%i", va_arg(valist, int));
		ntypes = ntypes - 1, separator = 17;
		break;
	case 'f':
		printf("%f", va_arg(valist, double));
		ntypes = ntypes - 1, separator = 17;
		break;
	case 's':
		word = va_arg(valist, char *);
		if (word == NULL)
			word = "(nil)";
		printf("%s", word);
		ntypes = ntypes - 1, separator = 17;
		break;
	}
	if (ntypes != 0 && separator == 17)
		printf(", ");
	separator = 0;
	pos++;
	}
	printf("\n");
	va_end(valist);
}
