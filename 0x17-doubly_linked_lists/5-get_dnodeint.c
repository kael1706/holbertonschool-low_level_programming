#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t a = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (head != NULL)
	{
		a = a + 1;
		head = head->next;
		if (a == index)
			return (head);
	}
	return (NULL);
}
