#include "lists.h"

/**
* _strlen - return the length of an array
* @str: the str pointer
* Return: return the length
*/
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
* print_list - function that prints all the elements of a list_t list.
* @h: a struct poiter pointes to the head of the linked list
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t len = 0;


	while (h)
	{

		printf("[%u] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		len++;
	}

	return (len);
}
