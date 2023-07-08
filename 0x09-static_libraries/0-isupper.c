#include "main.h"

/**
 *_isupper - checks if the char is upper case or not
 *@c : char to be tested.
 *Return: 1 if its upper case and 0 if its not
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
