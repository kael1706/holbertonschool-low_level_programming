#include <stdlib.h>

/**
*_realloc - realloc but with malloc
* @newP: new pointer created with malloc
* @ptr: pointer created with malloc
* @new_size: is the new size
*/
void copyPasteK(char *newP, void *ptr, unsigned int new_size)
{
	unsigned int i = 0;

	while (i < new_size)
	{
		*((char *)newP + i) = *((char *)ptr + i);
		i++;
	}
}

/**
* _realloc - realloc but with malloc
* @ptr: pointer created with malloc
* @old_size: used space
* @new_size: is the new size
* Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newP;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (newP == NULL)
		return (NULL);
	copyPasteK(newP, ptr, new_size);
	free(ptr);
	return (newP);
}
