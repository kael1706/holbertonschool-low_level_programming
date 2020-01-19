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
	int status = 0;

	if (ht)
	{
		printf("{");
		for (idx_ht = 0; idx_ht <= ht->size; idx_ht++)
		{
			n = ht->array[idx_ht];
			if (n && status <= 1)
				status += 1;
			if ((status != 1 && idx_ht != ht->size) && n)
				printf(", ");
			while (n)
			{
				printf("'%s': '%s'", n->key, n->value);
				if (n->next)
				{
					printf(", ");
				}
				n = n->next;
			}
		}
		printf("}\n");
	}
}
