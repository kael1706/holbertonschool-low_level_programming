#include "lists.h"

/**
* dlistint_len - quantity of items in the list
* @h: pointer pointing to the head of the list
*
* Return: quantity of items
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a = a + 1;
		h = h->next;
	}

	return (a);
}
