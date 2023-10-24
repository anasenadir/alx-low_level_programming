#include "lists.h"

/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list.
 * @head: the head pointer of the list
 * @n: the data that the new node holds
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head)
		new_node->next = *head;

	*head = new_node;
	return (new_node);
}
