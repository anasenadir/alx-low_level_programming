#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node
 * of a dlistint_t linked list.
 * @head: the head pointer of the list
 * @index: the index of node
 * Return: returns the nth node
*/
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head)
    {
        sum += head->n;
        head = head->next;
    }
    
    return (sum);
}
