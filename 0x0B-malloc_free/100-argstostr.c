#include "main.h"
#include <stdlib.h>
/**
 * _strlen - finds the lengh of string
 * @s: string
 * Return: integer
 */
int _strlen(char *s)
{
int size = 0;

for (; s[size] != '\0'; size++)
;
return (size);
}
/**
 * *argstostr - concatenates all the arguements
 * @ac: integer
 * @av: arguement
 * Return: string
 */
char *argstostr(int ac, char **av)
{
int i = 0, ic = 0;
int j = 0, cmp = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);
for (; i < ac; i++, ac++)
ic += _strlen(av[i]);
s = malloc(sizeof(char) * ic + 1);
if (s == 0)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0' ; j++, cmp++)
s[cmp] = av[i][j];
s[cmp] = '\n';
cmp++;
}
s[cmp] = '\0';
return (s);
}
