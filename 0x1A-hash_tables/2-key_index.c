#include "hash_tables.h"
/**
 * key_index - function returns index for @key
 * @key: key to search for it's index
 * @size: size of the hash table
 *
 * Return: index of key in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index / size);
}
