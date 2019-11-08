#include "lists.h"

/**
  * reverse_listint - listint_t ^ -1
  * @head: first node
  * Return: first node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *f_1 = NULL;
	listint_t *f_2 = NULL;

	if (head == NULL || (*head == NULL))
		return (NULL);
	while ((*head) != NULL)
	{
		f_2 = (*(*head)).next;
		(*(*head)).next = f_1;
		f_1 = (*head);
		(*head) = f_2;
	}
	*head = f_1;
	return (*head);
}

