#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");/*idx 173*/
	hash_table_set(ht, "mentioner", "test1");/*idx 278*/
	hash_table_set(ht, "hetairas", "test2");/*idx 278*/
	hash_table_set(ht, "x", "test3");/*idx 541*/
	return (EXIT_SUCCESS);
}
