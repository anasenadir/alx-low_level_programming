#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list.
 * @head: the head pointer of the list
 * Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
