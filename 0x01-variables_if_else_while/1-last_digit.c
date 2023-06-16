#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 * Description: 'the last digit program'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
int lastnumb;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastnumb = n % 10;
	if (lastnumb > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnumb);
	}
	else if (lastnumb == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastnumb);
	}
	else if (lastnumb < 6 && lastnumb != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnumb);
	}
	return (0);
}
