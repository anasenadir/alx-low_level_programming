#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked lis
 * @head: the head pointer of the list
 * @index: is the index of the node, starting at.
 * Return: the head node’s data (n).
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	if (!head || !index)
		return (NULL);


	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
