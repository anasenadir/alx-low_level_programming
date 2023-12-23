#include "hash_tables.h"

/**
 * free_linked_list - free a linked list
 * @head: the head pointer of the list
*/
void free_linked_list(hash_node_t *head)
{
	hash_node_t *current;

	if (!head)
		return;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->key);
		free(current->value);
		free(current);
	}
}

/**
 * hash_table_delete -  function that deletes a hash table
 * @ht: is the hashtable
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;

	if (!ht || !ht->array)
		return;


	for (index = 0; index < ht->size; index++)
		free_linked_list(ht->array[index]);
	free(ht->array);
	free(ht);
}
