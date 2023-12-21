#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table.
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table.
 *        If something went wrong, your function should
 *        return NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));

	if (!table || !size)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	i = 0;
	while (i < size)
		table->array[i++] = NULL;

	return (table);
}
