#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that print all numbers from
 * 0 to 9 except 2 and 4
 * Return : nothing
 */
void print_most_numbers(void)
{
int i;

for (i = 48; i <= 57; i++)
{
if ((i == 50) || (i == 52))
{
continue;
}
putchar(i);
}
putchar(10);
}
