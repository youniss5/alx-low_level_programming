#include "main.h"
/**
* main - Entry poin
* Description: 'Print _putchar'
*is written by youniss
* Return: Always 0 (Success)
*/
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
