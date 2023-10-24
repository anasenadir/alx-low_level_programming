#include "lists.h"

/**
 * delete_nodeint_at_index - delete a new node at a given position.
 * @head: the head pointer of the list
 * @index: is the index of the list where the new node should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head, *next;
	unsigned int i = 0;


	if (!*head)
		return (-1);

	if (!index)
	{
		node = node->next;
		free(*head);
		*head = node;
		return (1);
	}

	while (node)
	{
		if (i == index - 1)
		{
			next = node->next->next;
			free(node->next);
			node->next = next;
			return (1);
		}
		node = node->next;
		i++;
	}
	return (-1);
}
