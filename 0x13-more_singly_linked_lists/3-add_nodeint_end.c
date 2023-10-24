#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list.
 * @head: the head pointer of the list
 * @n: the data that the new node holds
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = (*head);

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;


	if (!current)
		*head = new_node;
	else
	{
		while (current->next)
			current = current->next;

		current->next = new_node;
	}

	return (new_node);
}
