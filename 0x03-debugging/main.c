#include "main.h"
#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* positive_or_negative - ckecks if i is negative or positive
* i - parameter to check
* Return: 0
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	} else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}

int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);

	return (0);
}
