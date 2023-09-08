#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with the key
 * @ht: hash table
 * @key: key
 * Return: value or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size); /* get index */

	temp = ht->array[idx];
	/* iterate index */
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0) /* found key */
			return (temp->value);
		temp = temp->next; /* go to next node */
	}

	return (NULL);
}
