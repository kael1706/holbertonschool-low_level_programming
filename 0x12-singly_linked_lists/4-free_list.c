#include "lists.h"

/**
* free_list - free allocated memory
* @head: the first element
*/
void free_list(list_t *head)
{
	list_t *nodo;

	while (head != NULL)
	{
		nodo = (*head).next;
		free((*head).str);
		free(head);
		head = nodo;
	}
}

