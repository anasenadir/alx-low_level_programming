#include "lists.h"

/**
 * add_dnodeint_end -  that adds a new node at the
 * end of a dlistint_t list.
 * @head: the head pointer of the list
 * @n: the data
 * Return: the address of the new element,
 * or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		return (*head = new_node);
	}


	while (current->next)
		current = current->next;
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
