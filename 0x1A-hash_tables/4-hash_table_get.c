#include "hash_tables.h"

/**
 * hash_table_get - function that adds an element to the hash table.
 * @ht: the hashtable
 * @key: the key of the node
 * Return: the value associated with the element,
 *          or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (!key || !ht || !ht->array)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);

	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);

	current_node = ht->array[index];

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}
	return (NULL);
}
