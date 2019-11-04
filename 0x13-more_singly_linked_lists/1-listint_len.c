#include "lists.h"

/**
* listint_len - print number of
* elements in listint_t
* @h: first node
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int c = 0;

	/*on each lap change to the next node.*/
	while (h != NULL)
	{
		h = (*h).next;
		c = c + 1;
	}
	return (c);
}

