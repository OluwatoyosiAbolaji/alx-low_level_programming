#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, start = 1;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (start != 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			start = 0;
			temp = temp->next;
		}
	}
	printf("}\n");
}
