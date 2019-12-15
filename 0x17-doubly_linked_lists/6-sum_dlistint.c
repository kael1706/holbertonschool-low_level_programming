#include "lists.h"
/**
* sum_dlistint - the cumulative sum of item->n
* @head: first item of the list.
*
* Return: int
*/
int sum_dlistint(dlistint_t *head)
{
	int answer = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		answer = answer + head->n;
		head = head->next;
	}
	return (answer);
}
