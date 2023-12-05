#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head of list
 * @idx: index of list where new node should be added
 * @n: value of new node
 *
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *new_node, *next, *cur;

if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

cur = *h;

while (cur)
{
if (i == idx - 1)
{
next = cur->next;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->prev = cur;
new_node->next = next;
cur->next = new_node;
if (next != NULL)
next->prev = new_node;
return (new_node);
}

cur = cur->next;
i++;
}

if (i == idx)
return (add_dnodeint_end(h, n));

return (NULL);
}
