#include "hash_tables.h"


/**
 * free_node - Free a node.
 * @node: Node to free.
 *
 * Return: Void.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hashtable
 * @key: the key of the new node
 * @value: the value of the new node
 * @Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key,
                const char *value)
{
    hash_node_t *new_node, *current, *tmp;
    unsigned long int index;

    if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);

    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);
    
    new_node->next = NULL;
    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (!new_node->value)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    index = key_index((const unsigned char *)key, ht->size);

    if (ht->array[index])
    {
        /* update the new_node if it is exists*/ 
        if (strcmp(ht->array[index]->key, key) == 0)
        {
            current = ht->array[index];
            new_node->next = current->next;
            ht->array[index] = new_node;
            free_node(current);
            return (1);
        }
        current = ht->array[index];
        tmp = NULL;
        /* check the other nodes to update it if exists*/ 
        while (current)
        {
            if (strcmp(current->key, key) == 0)
            {
                new_node->next = current->next;
                if (tmp)
                    tmp->next = new_node;
                free_node(current);
                return (1);
            }
            tmp = current;
            current = current->next;
        }
        
        /* create the new_node if it is not exists*/

        tmp = ht->array[index];
        new_node->next = tmp;
        ht->array[index] = new_node;
        return (1);
    }
    ht->array[index] = new_node;
    return (1);
}
