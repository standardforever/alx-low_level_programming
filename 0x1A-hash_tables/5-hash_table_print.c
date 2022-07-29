#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash_node;
	unsigned long int i = 0;
	char flag = 0; /* 0 while no data has been printed yet */

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		hash_node = ht->array[i];
		while (hash_node)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", hash_node->key, hash_node->value);
			flag = 1;
			hash_node = hash_node->next;

		}
		i++;
	}
	printf("}\n");
}
