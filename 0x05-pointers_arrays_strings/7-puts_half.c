#include "main.h"
/**
 * puts_half - a function that prints half of the string
 * @str: string
 * return: half of input
 */
void puts_half(char *str)
{
int x, n, long1;
long1 = 0;

for (x = 0; str[x] != 0; x++)
long1++;
n = (long1 / 2);
if ((long1 % 2) == 1)
n = ((long1 + 1) / 2);
for (x = n; str[x] != 0; x++)
_putchar(str[x]);
_putchar('\n');
}
