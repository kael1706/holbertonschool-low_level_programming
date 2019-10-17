#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - test malloc
* @b: bytes
* Return: 98 if fail
*/
void *malloc_checked(unsigned int b)
{
	void *tmp;

	tmp = malloc(b);
	if (tmp == NULL)
	{
		free(tmp);
		exit(98);
	}
	return (tmp);
}
