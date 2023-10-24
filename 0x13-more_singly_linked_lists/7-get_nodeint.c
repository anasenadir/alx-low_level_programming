#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked lis
 * @head: the head pointer of the list
 * @index: is the index of the node, starting at.
 * Return: the head node’s data (n).
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *node;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
