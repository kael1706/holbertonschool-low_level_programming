#include "lists.h"

/**
* add_nodeint - adds a new node
* to the header position
* @head: first node
* @n: number
* Return: address or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);
	(*n_node).n  = n;
	(*n_node).next = *head;
	*head = n_node;
	return (n_node);
}

