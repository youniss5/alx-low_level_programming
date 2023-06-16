#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 * Description: 'print alphabet program'
 * Return: Always 0 (Success)
 */
int main(void)
{
int lowerCase = 'a';
int upperCase = 'A';
while (lowerCase <= 'z')
{
putchar (lowerCase);
lowerCase += 1;
}
putchar ('\n');
while (upperCase <= 'Z')
{
putchar (upperCase);
upperCase += 1;
}
putchar ('\n');
return (0);
}
