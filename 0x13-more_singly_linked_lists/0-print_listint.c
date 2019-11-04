#include "lists.h"

/**
* print_listint - print elements of listint_t
* @h: first node
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int c = 0;

	/*on each lap change to the next node.*/
	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		c = c + 1;
	}
	return (c);
}
