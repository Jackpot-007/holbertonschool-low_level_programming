#include "main.h"

/**
 * print_line - Prints a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 */
void print_line(int n)
{
	int i;  /* Declare the variable outside the loop */

	if (n <= 0)
	{
	_putchar('\n');  /* Print only a new line if n is 0 or less */
	}
	else
	{
	for (i = 0; i < n; i++)  /* Now the declaration is outside the loop */
	{
	_putchar('_');  /* Print '_' n times */
	}
	_putchar('\n');  /* Print a new line after the line of underscores */
	}
}
