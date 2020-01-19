#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int idx_ht;
	hash_node_t *n;

	if (ht != NULL)
	{
		printf("{");
		for (idx_ht = 0; idx_ht <= ht->size; idx_ht++)
		{
			n = ht->array[idx_ht];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				if (n->next != NULL)
				{
					printf(", ");
				}
				n = n->next;
			}
		}
		printf("}\n");
	}
}
