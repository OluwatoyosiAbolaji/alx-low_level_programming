#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of hash table
 * Return: pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size; /* set size */
	table->array = malloc(sizeof(shash_node_t *) * size); /* set array */
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++) /* initialize indexes as NULL */
		table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table to be updated
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *node, *temp;

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
	node = screate_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	/* add node to sorted linked list */
	if (node_add(ht, node) == NULL)
		return (0);
	return (1);
}

/**
 * node_add - adds node to sorted linked list
 * @ht: hash table
 * @node: node
 * Return: node or NULL if failed
 */
shash_node_t *node_add(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp, *previous;

	if (ht->shead == NULL) /* first node */
	{
		ht->shead = node;
		ht->stail = ht->shead;
		return (node);
	}
	temp = ht->shead;
	if (strcmp(temp->key, node->key) > 0) /* node key smaller than head's*/
	{
		node->snext = ht->shead;
		temp->sprev = node;
		ht->shead = node;
		return (node);
	}
	while (temp != ht->stail && strcmp(temp->key, node->key) < 0)
	{
		previous = temp;
		temp = temp->snext;
	}
	if (temp == ht->stail && strcmp(temp->key, node->key) < 0)
	{
		temp->snext = node;
		node->sprev = temp;
		ht->stail = node;
		return (node);
	}
	previous->snext = node;
	node->sprev = temp->sprev;
	temp->sprev = node;
	node->snext = temp;
	return (node);
}

/**
 * screate_node - creates a new hash node
 * @key: key to add
 * @value: value to add
 *
 * Return: pointer to new node, or NULL if fail
 */
shash_node_t *screate_node(const char *key, const char *value)
{
	shash_node_t *node;

	if (key == NULL || value == NULL || strlen(key) == 0)
		return (NULL);
	node = malloc(sizeof(shash_node_t));
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
	node->sprev = NULL;
	node->snext = NULL;
	return (node);
}

/**
 * shash_table_get - retrieves a value associated with the key
 * @ht: hash table
 * @key: key
 * Return: value or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *temp;

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

/**
 * shash_table_print - prints a sorted hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int start = 1;
	shash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (temp = ht->shead; temp != NULL; temp = temp->snext)
	{
		if (start != 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		start = 0;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int start = 1;
	shash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (temp = ht->stail; temp != NULL; temp = temp->sprev)
	{
		if (start != 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		start = 0;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *next;

	if (ht == NULL)
		return;

	temp = ht->shead;
	while (temp != NULL)
	{
		next = temp->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = next;
	}
	free(ht->array);
	free(ht);
}
