#include "lists.h"
/**
 * sum_listint - fucnition that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: the head pointer of the list
 * Return: the sum of all the data.
*/
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (!head)
		return (0);

	for (node = head; node; node = node->next)
		sum += node->n;

	return (sum);
}
