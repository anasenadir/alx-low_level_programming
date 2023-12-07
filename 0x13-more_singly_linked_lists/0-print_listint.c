#include "lists.h"

/**
 * print_listint - function that prints all the list
 * @h: the head pointer
 * 
 * Return: the size of the linked list
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
