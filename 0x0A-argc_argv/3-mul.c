#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: number of command line arguments
 * @argv: pointer to an array of commad line arguments
 * Return: 0 (success)
 */
int main(int argc, const char *argv[])
{
int sum;

if (argc == 3)
{
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
