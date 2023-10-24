#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: the head pointer of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}

	*head = NULL;
}
