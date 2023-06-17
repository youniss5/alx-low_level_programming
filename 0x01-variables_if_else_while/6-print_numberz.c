#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers using (putchar)'
 * Return: Always 0 (Success)
 */
int main(void)
{
int numb;
for (numb = 0; numb < 10; numb++);
putchar((numb % 10) + '0');
putchar('\n');
return (0);
}
