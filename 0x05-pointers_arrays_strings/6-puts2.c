#include "main.h"
/**
 * puts2 -function should print only 1 char out of 2
 * @str: string
 * Return: numbers (print)
 */
void puts2(char *str)
{
int x = 0;
int y = 0;
char *s = str;
int z;

while (*s != 0)
{
x++;
s++;
}
y = x - 1;
for (z = 0; z <= y; z++)
{
if (z % 2 == 0)
{
_putchar(str[z]);
}
}
_putchar('\n');
}
