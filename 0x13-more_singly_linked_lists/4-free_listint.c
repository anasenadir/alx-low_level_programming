#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: the head pointer of the list
*/
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
