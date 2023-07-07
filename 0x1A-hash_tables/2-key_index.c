#include "hash_tables.h"

/**
 * key_index - Computes the index for a key in a hash table array
 * @key: The key to compute the index for
 * @size: The size of the array in the hash table
 *
 * This function uses the hash_djb2 function to calculate the index at which
 * the key/value pair should be stored in the array of the hash table.
 *
 * Return: The computed index for the given key and array size.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
