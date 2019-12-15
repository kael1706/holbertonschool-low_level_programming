#include "lists.h"

/**
  * delete_dnodeint_at_index - delete item of a list
  * @head: head address
  * @index: position  to delete
  * Return: 1 | -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	dlistint_t *nx_n;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = h->next;
		if (h->next != NULL)
			h->next->prev = NULL;
		free(h);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (h->next == NULL)
			return (-1);
		h = h->next;
	}
	nx_n = h->next;
	h->next = (*nx_n).next;
	if ((*nx_n).next != NULL)
		(*nx_n).next->prev = h;
	free(nx_n);
	return (1);
}
