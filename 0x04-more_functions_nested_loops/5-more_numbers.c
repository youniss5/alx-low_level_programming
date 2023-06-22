#include "main.h"
#include <stdio.h>
/**
*more_numbers - prints numbers from 0 to 14 , 10 times
*Return: nothing
*/
void more_numbers(void)
{
int n1, n2;
for (n1 = 0; n1 <= 10; n1++)
{
for (n2 = 0; n2 <= 14; n2++)
{
if (n2 > 9)
{
putchar((n2 / 10) + '0');
}
putchar((n2 % 10) + '0');
}
putchar(10);
}
}
