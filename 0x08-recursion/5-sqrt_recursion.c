#include "main.h"

/*Helper function to perform the recursive square root calculation*/
int _sqrt_helper(int n, int guess)
{
	/*Base case 1: if guess squared is equal to n, return guess*/
	if (guess * guess == n)
	{
		return guess;
	}

	/*Base case 2: if guess squared is greater than n, 
	 * return -1 (no natural square root)*/
	if (guess * guess > n)
	{
		return -1;
	}

	/*Recursive case: increment guess and check again*/
	return _sqrt_helper(n, guess + 1);
}

/*Main function to find the natural square root of n*/
int _sqrt_recursion(int n)
{
	/*If n is negative, it has no natural square root, so return -1*/
	if (n < 0)
	{
		return -1;
	}
	/*Start the recursion with an initial guess of 1*/
	return _sqrt_helper(n, 1);
}
