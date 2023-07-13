#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc.
 * @b: unsinged integer
 * Return: pointer to to the array or NULL
 */
void *malloc_checked(unsigned int b)
{
int *s = malloc(b);

if (s == 0)
exit(98);
return (s);
}
