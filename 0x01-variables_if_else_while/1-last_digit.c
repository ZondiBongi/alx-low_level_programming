#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text accoring to number
 * Return: Always (Succes)
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is less than 5\n", n,  n % 10);
	}
	else if ((n % 10) < 6 && (n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and 0\n", n, n % 10);
	}
	return (0);
}
