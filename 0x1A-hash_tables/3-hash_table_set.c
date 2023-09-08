#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be updated
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *temp;

	if (ht == NULL) /* hash table is empty */
		return (0);
	/* key is null or empty, value is null */
	if (key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	/* Check if key exists */
	for (temp = ht->array[idx]; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0) /* key exists */
		{
			if (strcmp(temp->value, value) != 0) /* value is different */
			{
				free(temp->value);
				temp->value = strdup(value);
			}
			return (1);
		}
	}
	/* create node if key doesn't exist */
	node = create_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[idx];
	ht->array[idx] = node;

	return (1);
}

/**
 * create_node - creates a new hash node
 * @key: key to add
 * @value: value to add
 *
 * Return: pointer to new node, or NULL if fail
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	if (key == NULL || value == NULL || strcmp(key, "") == 0)
		return (NULL);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	return (node);
}
