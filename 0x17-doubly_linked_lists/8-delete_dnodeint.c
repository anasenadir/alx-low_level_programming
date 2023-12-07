#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: the head pointer of the list
 * @index: index of the list where the new node should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (!current)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current && i < index)
	{
		i += 1;
		current = current->next;
	}

	if (!current)
		return (-1);

	current->prev->next = current->next;

	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
