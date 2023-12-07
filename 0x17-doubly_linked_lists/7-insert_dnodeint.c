#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position.
 * @h: the head pointer of the list
 * @idx: index of the list where the new node should be added.
 * @n: data to be added
 * Return: returns address of the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 0;

	if (!current)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (current)
		{
			new_node->next = current;
			current->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	while (current)
	{
		if (i == idx)
		{
			new_node->next = current;
			new_node->prev = current->prev;
			if (current->prev)
				current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		i += 1;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
