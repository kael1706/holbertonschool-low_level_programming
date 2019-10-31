#include "lists.h"

/**
* add_node - add node
* @head: adress list
* @str: word for node
* Return: new node
*/
list_t *add_node(list_t **head, const char *str)
{
	int lenStr;
	char *word;
	list_t *nodo_next = malloc(sizeof(list_t));

	if (nodo_next == NULL)
		return (NULL);
	for (lenStr = 0; str[lenStr] != '\0'; lenStr++)
		;
	word = strdup(str);
	(*nodo_next).str  = word;
	(*nodo_next).len  = lenStr;
	(*nodo_next).next = *head;
	*head = nodo_next;
	return (nodo_next);
}

