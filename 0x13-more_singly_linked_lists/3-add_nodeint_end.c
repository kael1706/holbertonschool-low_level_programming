#include "lists.h"

/**
* add_nodeint_end - add a new node
* in the last position.
* @head: first node
* @n: number
* Return: address || NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nx_node = *head;
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	(*n_node).n = n;
	(*n_node).next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	while ((*nx_node).next != NULL)
		nx_node = (*nx_node).next;
	(*nx_node).next = n_node;
	return (n_node);
}

