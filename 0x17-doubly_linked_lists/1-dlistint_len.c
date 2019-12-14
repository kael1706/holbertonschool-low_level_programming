#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	int a = 0;

	while(h != NULL)
	{
		a+=1;
		h = h->next;
	}

	return (a);
}
