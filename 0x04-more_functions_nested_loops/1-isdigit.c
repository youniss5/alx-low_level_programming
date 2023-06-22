#include "main.h"
/**
 *_isdigit - checks if the c is a digit or not
 *@c : char to be tested.
 *Return: 1 if its upper case and 0 if its not
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
