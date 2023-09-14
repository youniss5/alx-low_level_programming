#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked
 * @h: head node address
 * Return: list's size
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t x = 0;

while (h)
{
h = h->next;
x++;
}
return (x);
}
