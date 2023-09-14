#include "lists.h"
/**
 * insert_dnodeint_at_index - add new node to dlist at a certain position
 * @h: head node pointer
 * @idx: new node position (index)
 * @n: integer of (new node)
 * Return: NULL if fails , or new node address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tm = *h, *new;

if (idx == 0)
return (add_dnodeint(h, n));
for (; idx != 1; idx--)
{
tm = tm->next;
if (tm == NULL)
return (NULL);
}
if (tm->next == NULL)
return (add_dnodeint_end(h, n));

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = tm;
new->next = tm->next;
tm->next->prev = new;
tm->next = new;
return (new);
}
