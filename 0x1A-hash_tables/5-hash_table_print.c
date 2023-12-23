#include "hash_tables.h"

/**
 * hash_table_print -  function that prints a hash table.
 * @ht: is the hashtable
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int flag = 0;
	hash_node_t *current;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current)
		{
			if (flag == 0)
				printf("'%s': '%s'", current->key, current->value);
			else
				printf(", '%s': '%s'", current->key, current->value);
			current = current->next;
			flag = 1;
		}

	}
	printf("}\n");
}
