#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers using (putchar)'
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 0;
while (x < 10)
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
