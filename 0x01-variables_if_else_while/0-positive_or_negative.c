#include <stdio.h>
#include <time.h>

/**
 * main - Prints Random number
 * Descrition: assing a random number to the variable
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand(void) - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{	printf("%d is negetive\n", n);
	}
	return (0);
}

