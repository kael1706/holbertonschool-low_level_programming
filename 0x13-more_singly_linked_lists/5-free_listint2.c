#include "lists.h"

/**
  * free_listint2 - free listint_t.
  * @head: first node
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *f_node;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			f_node = *head;
			*head = (*head)->next;
			free(f_node);
		}
		*head = NULL;
	}
}

