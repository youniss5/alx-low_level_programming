#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * @val: square root to be returned.
 * Return: integer
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
/**
 * square - to get square root
 * @val: square root to be returned
 * @n: integer
 * Return: int
 */
int square(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return (square(n, val + 1));
else
return (-1);
}
