#include "lists.h"

/**
  * add_node_end - add_node^-1
  * @head: first element
  * @str: word for push inside of node
  * Return: pointer of next node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lh = *head;
	list_t *nodo_next = malloc(sizeof(list_t));
	int lenStr;

	if (nodo_next == NULL)
		return (NULL);

	for (lenStr = 0; str[lenStr] != '\0'; lenStr++)
		;
	(*nodo_next).str  = strdup(str);
	(*nodo_next).len  = lenStr;
	(*nodo_next).next = NULL;

	if (*head == NULL)
	{
		*head = nodo_next;
		return (nodo_next);
	}
	while ((*lh).next != NULL)
	{
		lh = (*lh).next;
	}
	(*lh).next = nodo_next;
	return (nodo_next);
}

