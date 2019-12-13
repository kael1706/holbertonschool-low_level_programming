#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	while (h !=NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (2);
}
