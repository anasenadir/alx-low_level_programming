#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list.
* @h: a struct poiter pointes to the head of the linked list
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *head_ref = h;
	size_t len = 0;


	while (head_ref)
	{
		if (head_ref->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", head_ref->len, head_ref->str);

		head_ref = head_ref->next;
		len++;
	}

	return (len);
}
