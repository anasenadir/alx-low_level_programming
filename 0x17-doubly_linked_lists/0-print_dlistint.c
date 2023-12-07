#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head pointer of the list
 * Return: the size of the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;
	const dlistint_t *current = h;

	if (!h)
		return (0);
	size = 0;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		size += 1;
	}
	return (size);
}
