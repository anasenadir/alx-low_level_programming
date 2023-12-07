#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node
 * of a dlistint_t linked list.
 * @head: the head pointer of the list
 * @index: the index of node
 * Return: returns the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
    unsigned int i = 0;

    while (i < index && current)
    {
        i += 1;
        current = current->next;
    }
    
    return (current);
}
