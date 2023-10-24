#include "lists.h"

/**
 * print_listint - function that prints all
 * the elements of a listint_t list.
 * @h: the head pointer
 * Return: the size of the linked list
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int len = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}

	return (len);
}
