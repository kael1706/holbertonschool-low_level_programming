#include "hash_tables.h"

/**
 * hash_table_get - get the value related with position key
 * @ht: hash table
 * @key: keyword to search the position of the cell
 *
 * Return: value | NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx_ht;
	hash_node_t *n;

	if (key == NULL || ht == NULL)
		return (NULL);
	idx_ht = key_index((const unsigned char *)key, ht->size);
	n = ht->array[idx_ht];
	while (n)
	{
		if (strcmp(key, n->key) == 0)
			return (n->value);
		n = n->next;
	}
	return (NULL);
}
