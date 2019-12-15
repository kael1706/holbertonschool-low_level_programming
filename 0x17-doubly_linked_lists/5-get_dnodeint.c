#include "lists.h"
/**
* get_dnodeint_at_index - find the item by index
* @head: first position of the list.
* @index: position of the item
*
* Return: item ( or node) with the same index or NULL if not
*/
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
