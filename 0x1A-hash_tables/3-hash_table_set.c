#include "hash_tables.h"
/**
 * hash_table_set - adds a node to the hash table with @key and @value pair
 * @ht: hash table to add key/value to.
 * @key: key to add.
 * @value: value to the added key.
 *
 * Return: 1 if succeded, 0 else.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val_cpy;
	hash_node_t *new_node, *target_node;
	unsigned long int index;

	if (!ht || !key || *key == '\0' || !value)
	{
		return (0);
	}
	val_cpy = strdup(value);
	if (!val_cpy)
	{
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (0);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		return (0);
	}
	new_node->value = val_cpy;
	index = key_index((const unsigned char *)key, ht->size);
	target_node = ht->array[index];
	if (target_node)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		ht->array[index] = new_node;
		return (1);
	}

}
