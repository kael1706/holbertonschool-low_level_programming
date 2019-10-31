#include "lists.h"

/**
  * list_len - count elements of linked list
  * @h: first element of the list
  * Return: count of elements
  */
size_t list_len(const list_t *h)
{
	const list_t *node = h;
	int nElements = 0;


	while (node != NULL)
	{
		nElements++;
		node = node->next;
	}
	return (nElements);
}

