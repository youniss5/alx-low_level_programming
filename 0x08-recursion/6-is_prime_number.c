#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function to check if n is a prime num or not.
 * @notn: integer
 * @n: integer
 * Return: 0 or 1
 */
int is_prime(int n, int notn);
int is_prime_number(int n)
{
return (is_prime(n, 2));
}
/**
 * is_prime - check numbers < n
 * @n: integer
 * @notn: integer
 * Return: integer
 */
int is_prime(int n, int notn)
{
if (notn >= n && n >= 2)
return (1);
else if (n % notn == 0 || n <= 1)
return (0);
else
return (is_prime(n, notn + 1));
}
