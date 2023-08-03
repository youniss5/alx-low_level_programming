#include "main.h"
/**
 * set_bit - sets the value of a bit to a given index
 * @n: the number of index
 * Return: 1 if success , -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return (!!(*n |= 1L << index));
}
