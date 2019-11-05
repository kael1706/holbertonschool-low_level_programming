#include "lists.h"

/**
  * get_nodeint_at_index - get element->n by index
  * of a listint_t
  * @head: first node
  * @index: position of element
  * Return: address
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while ( i < index)
	{
		if ((*head).next == NULL)
			return (NULL);
		head = (*head).next;
		i++;
	}
	return (head);
}

