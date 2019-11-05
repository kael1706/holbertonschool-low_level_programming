#include "lists.h"

/**
* free_listint - free listint_t.
* @head: first node
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *f_node;

	while (head != NULL)
	{
		f_node = head->next;
		free(head);
		head = f_node;
	}
}

