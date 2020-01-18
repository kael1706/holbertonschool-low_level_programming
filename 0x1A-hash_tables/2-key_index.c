#include "hash_tables.h"

/**
 * key_index - gives you the poition of a @key
 * @key: preprocessed numeric key
 * @size: size of the array of the hash table
 * Return: index in the hash table related with @key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;
	return (idx);
}
