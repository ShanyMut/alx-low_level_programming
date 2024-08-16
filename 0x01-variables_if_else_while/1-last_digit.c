#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of the number stored in the variable n
 * Return: 0
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));  /* Seed the random number generator*/
	n = rand();  /* Generate a random number and assign it to n */
	last_digit = n % 10;  /* Get the last digit of n */

	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (last_digit == 0)

	{
		printf("0\n");

	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}

