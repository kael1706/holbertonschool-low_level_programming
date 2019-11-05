#include "lists.h"

/**
  * sum_listint - add of all element->n of a listint_t
  * @head: first node
  * Return: summation of n in the list
  */
int sum_listint(listint_t *head)
{
	listint_t *c_node = head;
	int resp = 0;

	while (c_node != NULL)
	{
		resp = resp + (*c_node).n;
		c_node = (*c_node).next;
	}
	return (resp);
}

