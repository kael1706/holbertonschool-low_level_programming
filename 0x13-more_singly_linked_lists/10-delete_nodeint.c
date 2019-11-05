#include "lists.h"

/**
  * delete_nodeint_at_index - delete node by index
  * @head: first node
  * @index: index of deleted node
  * Return: 1  || -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n_node;
	listint_t *t_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	t_node = *head;
	if (index == 0)
	{
		*head = (*(*head)).next;
		free(t_node);
		return (1);
	}
	while (i < (index - 1))
	{
		if (t_node == NULL)
			return (-1);
		t_node = (*t_node).next;
		i++;
	}
	n_node = (*t_node).next;
	(*t_node).next = (*t_node).next->next;
	free(n_node);
	return (1);
}

