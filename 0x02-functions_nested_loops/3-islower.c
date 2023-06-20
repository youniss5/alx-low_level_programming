#include "main.h"
/**
  * _islower - Checks for lowercase character
  *@c: The character to be checked
  * Return: 1 if success otherwise return 0 if not lowercase char
  */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
