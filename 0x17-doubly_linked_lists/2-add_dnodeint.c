#include "lists.h"
/**
 * add_dnodeint - function to add new node to the dlist
 * @head: address to the pointer of the head node
 * @n: integer of new nodes
 * Return: new node address or (NULL)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));

if (!head || !new)
return (new ? free(new), NULL : NULL);

new->n = n;
new->prev = NULL;

if (!*head)
{
*head = new;
new->next = NULL;
}
else
{
new->next = *head;
(*head)->prev = new;
*head = new;
}
return (new);
}
