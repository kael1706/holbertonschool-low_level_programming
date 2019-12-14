#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	size_t nNodes = 0;
	
	if (h ==NULL)
		return (0);
	while (h !=NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nNodes = nNodes + 1;
	}
	return (nNodes);
}
