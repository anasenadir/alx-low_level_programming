#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array of poiters
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list
 * @new: new node to add to the list
 * Return: pointer to the new list
*/
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **new_list;
	size_t i;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		new_list[i] = list[i];
	new_list[i] = new;
	free(list);
	return (new_list);
}

/**
 * print_listint_safe - function that prints a listint_t linked list..
 * @head: address of pointer to first node
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void*)head, head->n);
				free(list);
				return (num);
			}
			num++;
			list = _r(list, num, head);
			printf("[%p] %d\n", (void*)head, head->n);
			head = head->next;
		}
		free(list);
		return (num);
	}
}
