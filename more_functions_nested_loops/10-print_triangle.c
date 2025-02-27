#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');  /* If size is 0 or less, print a new line */
	}
	else
	{
	for (i = 1; i <= size; i++)  /* Loop through each row */
	{
	for (j = 1; j <= size - i; j++)  /* Print spaces */
	{
	_putchar(' ');
	}
	for (j = 1; j <= i; j++)  /* Print hashes */
	{
	_putchar('#');
	}
	_putchar('\n');  /* Print new line after each row */
	}
	}
}
