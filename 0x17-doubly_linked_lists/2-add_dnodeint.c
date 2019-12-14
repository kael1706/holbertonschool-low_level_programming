#include "lists.h"
/**
* add_dnodeint - add at the beginning of the list.
* Description: the list is type dlistint_t 
* @head: pointer that has a pointer that points to the head
* @n: a value that the structure needs
* Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_n = malloc(sizeof(dlistint_t));
	if (head == NULL || n_n == NULL)
		return (NULL);
	n_n->n = n;
	n_n->prev = NULL;
	n_n->next = NULL;

	if (*head != NULL)
	{
		n_n->next = *head;
		(*head)->prev = n_n;
	}

	*head = n_n;
	return (n_n);
}
