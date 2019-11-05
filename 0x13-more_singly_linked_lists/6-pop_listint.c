#include "lists.h"

/**
  * pop_listint - delete the head node of listint_t
  * @head: first node
  * Return: deleted_node->n
  */
int pop_listint(listint_t **head)
{
	int info_n;
	listint_t *temp_head = *head;

	if (!*head)
		return (0);
	info_n = (*temp_head).n;
	*head = (*(*head)).next;
	free(temp_head);
	return (info_n);
}

