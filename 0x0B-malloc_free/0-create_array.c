#include "main.h"
#include <stdlib.h>
/**
 * *creat_array - creates an array of chars and initializes it with a specific char.
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
char *n = malloc(size);

if (size == 0 || n == 0)
return (0);
while (size--)
n[size] = c;
return (n);
}
