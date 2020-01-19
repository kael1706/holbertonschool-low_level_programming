#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int idx_ht;/* index hash table*/
	hash_node_t *n;/*node*/
	hash_node_t *t_n; /*temporal node*/

	if (ht->array != NULL)
	{
		for (idx_ht = 0; idx_ht < ht->size; idx_ht++)
		{
			n = ht->array[idx_ht];
			while (n != NULL)
			{
				t_n = n;
				free(t_n->key);
				free(t_n->value);
				n = n->next;
				free(t_n);
			}
		}
	}
	free(ht->array);
	if (ht)
		free(ht);
}
