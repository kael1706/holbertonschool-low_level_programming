#include "lists.h"

/**
* print_list - print the elements of linked list.
* @h: first element of the list
* Return: count of elements
*/
size_t print_list(const list_t *h)
{
	const list_t *node = h;
	int nElements = 0;

	while (node != NULL)
	{
		if (NULL == (*node).str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", (*node).len, (*node).str);
		node = (*node).next;
		nElements++;
	}
	return (nElements);
}

