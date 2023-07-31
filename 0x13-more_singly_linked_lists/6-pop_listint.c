#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: adress to the pointer of the first node
 * Return: the popped node's data
 */
int pop_listint(listint_t **head)
{
listint_t *node;
int n;

if (!head || !*head)
return (0);

node = (*head)->next;
n = (*head)->n;
free(*head);
*head = node;
return (n);
}
