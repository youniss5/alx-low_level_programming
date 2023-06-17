#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int x;
char alpha;
for (x = 0; x < 9; x++)
putchar((x % 10) + '0');
for (alpha = 'a'; alpha <= 'f'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
