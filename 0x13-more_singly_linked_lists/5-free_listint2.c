#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: the head pointer of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (!head)
		return;

	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
