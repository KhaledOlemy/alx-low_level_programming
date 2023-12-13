#include "hash_tables.h"
/**
 * hash_table_print - print entire hash table
 * @ht: hast table to print
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	bool comma = false, first = false;

	if (!ht)
	{return; }
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node && first == false)
		{
			first = true;
		}
		while (node)
		{
			if (first == true && comma == false)
			{
				printf("'%s': '%s'", node->key, node->value);
				comma = true;
			}
			else
			{
				printf(", ");
				printf("'%s': '%s'", node->key, node->value);
			}
			node = node->next;
		}
	}
	printf("}\n");
}
