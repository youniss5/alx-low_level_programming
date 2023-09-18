#include "main.h"
/**
 *  _strlen - function that returns the lenght of a string
 *  @s: string ( parameter)
 *  Return: lenght
 */
int _strlen(char *s)
{
int x = 0;

while (*s != 0)
{
x++;
s++;
}
return (x);
}
