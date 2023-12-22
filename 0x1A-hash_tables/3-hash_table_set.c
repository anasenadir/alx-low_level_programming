#include "hash_tables.h"

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
    hash_node_t *new_node, *tmp;
    unsigned long int index;

    if (!key)
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
        if (strcmp(ht->array[index]->key, key) == 0)
        {
            ht->array[index] = new_node;
            return (1);
        }

        tmp = ht->array[index];
        new_node->next = tmp;
        ht->array[index] = new_node;
        free(tmp);
        return (1);
    }
    ht->array[index] = new_node;
    return (1);
}
