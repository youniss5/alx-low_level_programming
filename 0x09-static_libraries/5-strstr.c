#include "main.h"
/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: 0 ( success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *p = needle;

while (*h == *p && *p != '\0')
{
h++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
