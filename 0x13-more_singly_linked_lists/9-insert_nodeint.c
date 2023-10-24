#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the head pointer of the list
 * @idx: is the index of the list where the new node should be added.
 * @n: the data that the new node holds.
 * Return: the address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}

		node = node->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
