#include "lists.h"

/**
  * insert_nodeint_at_index -put node inside of list
  * @head: first node
  * @idx: the position of the new node
  * @n: attribute of node
  * Return: adress || or NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *n_node;
	listint_t *n_p;
	listint_t *p_p;

	if (head == NULL)
		return (NULL);
	p_p = NULL;
	n_p = *head;
	while (i < idx)
	{
		if (n_p == NULL)
			return (NULL);
		p_p = n_p;
		n_p = n_p->next;
		i = i + 1;
	}
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	(*n_node).n = n;
	(*n_node).next = n_p;
	if (idx == 0)
		*head = n_node;
	else
		(*p_p).next = n_node;
	return (n_node);
}

