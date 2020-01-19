#include "hash_tables.h"

/**
 * hash_table_set - insert item in one cell of hash table
 *@ht: hash table
 *@key: keyword to search the position of the cell
 *@value: value of new node that is in the cell
 * Return: 1 | 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx_ht;/*index of hash table*/
	hash_node_t *n_n = NULL; /*new node*/
	hash_node_t *n = NULL;/*node*/

	if (key == NULL || strcmp(key, "") == 0 || value == NULL || ht == NULL)
		return (0);
	idx_ht = key_index((const unsigned char *)key, ht->size);
	n = ht->array[idx_ht];
	n_n = malloc(sizeof(hash_node_t));
	if (n_n == NULL)
		return (0);
	n_n->key = strdup(key);
	n_n->value = strdup(value);
	if (n_n->key == NULL || n_n->value == NULL)
	{
		free(n_n);
		return (0);
	}
	if (n != NULL)
	{
		while (n)
		{
			if (strcmp(key, n->key) == 0)
			{
				free(n->value);
				n->value = strdup((char *)value);
				return (1);
			}
			n = n->next;
		}
	}
	n_n->next = ht->array[idx_ht];
	ht->array[idx_ht] = n_n;
	return (1);
}
