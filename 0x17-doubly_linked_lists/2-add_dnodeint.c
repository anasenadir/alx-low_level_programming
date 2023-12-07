#include "lists.h"

/**
 * add_dnodeint -  that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: the head pointer of the list
 * @n: the data
 * Return: the address of the new element,
 * or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
