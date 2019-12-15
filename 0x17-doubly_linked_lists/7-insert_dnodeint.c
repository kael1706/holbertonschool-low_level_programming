#include "lists.h"

/**
* insert_dnodeint_at_index - insert item in a numerical linked list
* @h: head address
* @idx: position to insert
* @n: item value
*
* Return: NULL | new node address
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_n;
	dlistint_t *p_n = *h;
	dlistint_t *nx_n = *h;
	unsigned int i;

	if (h == NULL || (*h == NULL && idx > 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	nx_n = nx_n->next;
	for (i = 0; i < idx - 1; i++)
	{
		if (p_n->next == NULL)
			return (NULL);
		p_n = p_n->next;
		nx_n = nx_n->next;
	}
	if (nx_n == NULL)
		return (add_dnodeint_end(h, n));
	n_n = malloc(sizeof(dlistint_t));
	if (n_n == NULL)
		return (NULL);
	(*n_n).n = n;
	(*n_n).next = p_n->next;
	(*n_n).prev = p_n;
	(*p_n).next = n_n;
	if (nx_n != NULL)
		nx_n->prev = n_n;
	return (n_n);
}
