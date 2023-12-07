#include "lists.h"

/**
 * dlistint_len - function that returns the
 * number of elements in a linked list
 * @h: the head pointer of the list
 * Return: the size of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;
	const dlistint_t *current = h;

	if (!h)
		return (0);
	size = 0;
	while (current)
	{
		current = current->next;
		size += 1;
	}
	return (size);
}
