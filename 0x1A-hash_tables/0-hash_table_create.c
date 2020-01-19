#include "hash_tables.h"

/**
 * hash_table_create - create a hash table.
 * in this case a hash table is array of hash_node_t
 * @size: size of the array inside hash table
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_ht = malloc(sizeof(hash_table_t));

	if (my_ht == NULL)
		return (NULL);
	my_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (my_ht->array == NULL)
		return (NULL);
	my_ht->size = size;
	return (my_ht);
}
