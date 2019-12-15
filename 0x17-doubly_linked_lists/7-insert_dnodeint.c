#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int a = 0;
	dlistint_t *head = *h;
	dlistint_t *n_n = malloc(sizeof(dlistint_t));

	if (head == NULL || n_n == NULL)
		return (NULL);
	n_n->n = n;
	n_n->prev = NULL;
	n_n->next = NULL;
	if (idx == 0)
	{
		n_n->next = *h;
		(*h)->prev = n_n;
		*h = n_n;
		return (n_n);
	}
	while (head != NULL)
	{
		a = a + 1;
		if (idx == a)
		{
			n_n->prev = head;
			n_n->next = head->next;
			head->next = n_n;
			head->next->prev = n_n;
			return (n_n);
		}
		head = head->next;
	}
	return (NULL);
}
