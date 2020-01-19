#include "hash_tables.h"

/**
 * hash_table_get -
 * @ht: hash table
 * @key: keyword to search the position of the cell
 *
 * Return: value | NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx_ht;
	hash_node_t *cell;

	if (key == NULL || ht == NULL)
		return (NULL);
	idx_ht = key_index((const unsigned char *)key, ht->size);
	cell = ht->array[idx_ht];
	while (cell)
	{
		if (strcmp(key, cell->key) == 0)
			return (cell->value);
		cell = cell->next;
	}
	return (NULL);
}
