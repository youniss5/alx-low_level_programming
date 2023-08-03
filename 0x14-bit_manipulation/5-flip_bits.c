#include "main.h"
/**
 * flip_bits - returns the number of bits needed for flip
 * @n: first number
 * @m: 2nd number
 * Return: converted number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int count = 0;

while (xor)
{
if (xor & 1ul)
count++;
xor = xor >> 1;
}
return (count);
}
