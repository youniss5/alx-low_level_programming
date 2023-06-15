#include <stdio.h>
/**
 *main - Entry point
 *Description: 'C program'
 *Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte\n", sizeof(char));
printf("Size of an integer: %lubytes\n", sizeof(int));
printf("Size of a long integer: %lu bytes\n", sizeof(long int));
printf("Size of a long long integer: %lu bytes\n", sizeof(long long int));
printf("Size of a float: %lu bytes\n", sizeof(float));
return (0);
}
