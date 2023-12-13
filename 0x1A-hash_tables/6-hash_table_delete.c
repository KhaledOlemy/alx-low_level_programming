#include "hash_tables.h"
/**
 * hash_table_delete - delete entire hash table
 * @ht: table to delete
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *hold;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			hold = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = hold;
		}
	}
	free(ht->array);
	free(ht);
}
