#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all
 * the elements of a listint_t list.
 * @h: the head pointer
 * Return: the size of the linked list
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
