#include <unistd.h>
/**
 * _putchar - write the char c to stdout
 * @c: the character to print
 *
 * Return: Always 0 (Success)
 * on error -1 is returned , and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
