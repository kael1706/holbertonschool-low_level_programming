#include "lists.h"

/**
* add_dnodeint_end - add at the end of the list.
* Description: the list is type dlistint_t
* @head: pointer that has a pointer that points to the head
* @n: a value that the structure needs
* Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_n = malloc(sizeof(dlistint_t));
	dlistint_t *h = *head;

	if (head == NULL || n_n == NULL)
		return (NULL);
	n_n->n = n;

	if (*head == NULL)
	{
		*head = n_n;
		return (n_n);
	}
	while (h->next != NULL)
		h = h->next;
	h->next = n_n;
	n_n->prev = h;
	return (n_n);
}
