#include "main.h"
/**
* print_alphabet_x10 - print alphabet 10 times
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char c;
int x = 0;
while (x <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
x++;
}
}
