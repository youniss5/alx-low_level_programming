#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data
 * @head: head node pointer
 * Return: sum (integer)
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
