#include "lists.h"

/**
* free_dlistint - free a list of type listint_t
* @head: head of the list type listint
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head != NULL)
	{
		h = (*head).next;
		free(head);
		head = h;
	}
}
