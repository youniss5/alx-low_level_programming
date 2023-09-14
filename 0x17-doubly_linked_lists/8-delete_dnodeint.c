#include "lists.h"
/**
 * delete_dnodeint_at_index -function deletes the node at index at a dlist
 * @head: head node pointer
 * @index: index to delete
 * Return: 1 (success) -1 (failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tm = *head;

if (*head == NULL)
return (-1);

for (; index != 0; index--)
{
if (tm == NULL)
return (-1);
tm = tm->next;
}
if (tm == *head)
{
*head = tm->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
tm->prev->next = tm->next;
if (tm->next != NULL)
tm->next->prev = tm->prev;
}
free(tm);
return (1);
}
