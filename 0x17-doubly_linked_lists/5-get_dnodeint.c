#include <stdlib.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current = head;
    unsigned int node_count = 0;

    while (current != NULL)
    {
        if (node_count == index)
        {
            return (current);
        }
        current = current->next;
        node_count++;
    }
    return (NULL);
}
