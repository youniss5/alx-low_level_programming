#include "main.h"
/**
 * get_endianness - return the endianess
 * Return: 0 if a big endian and 1 if small endian
 */
int get_endianness(void)
{
unsigned long int c = 1;

return (*(char *)&c);
}
