#include "hash_tables.h"
/**
 * hash_table_get - retrieve value for key in hash table
 * @ht: hash table to search in
 * @key: key to retrieve its value
 *
 * Return: value of key in ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *target;

	index = key_index((const unsigned char *)key, ht->size);
	if (!ht || !key || *key == '\0' || !ht->array[index])
	{
		return (NULL);
	}
	target = ht->array[index];
	while (target)
	{
		if (strcmp(target->key, key) == 0)
		{
			return (target->value);
		}
		target = target->next;
	}
	return (NULL);
}
