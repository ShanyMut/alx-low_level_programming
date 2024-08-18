#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i = 0;

	/* Find the length of the string manually*/
	while (s[i] != '\0')
	{
		i++;
	}
	/*Print the string in reverse*/
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	/* Print a new line at the end*/
	_putchar('\n');
}
