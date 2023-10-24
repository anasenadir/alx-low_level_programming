#include "lists.h"

/**
 * print_listint - function that prints all
 * the elements of a listint_t list.
 * @h: the head pointer
 * Return: the size of the linked list
*/
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}

