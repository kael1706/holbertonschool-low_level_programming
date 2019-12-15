#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * main - check the code for Holberton School students.
  *
  * Return: Always EXIT_SUCCESS.
  */
int main(void)
{
	dlistint_t *head;
	dlistint_t *x;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");
	x = insert_dnodeint_at_index(&head, 7, 4096);
	if (x == NULL)
		printf("%s\n", "insert node fail");
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
