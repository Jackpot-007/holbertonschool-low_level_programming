#include "main.h"

/**
 * print_square - Prints a square using the '#' character.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
	_putchar('\n');  /* Print only a new line if size is 0 or less */
	return;
	}

	for (row = 0; row < size; row++)  /* Loop for rows */
	{
	for (col = 0; col < size; col++)  /* Loop for columns */
	{
	_putchar('#');
	}
	_putchar('\n');  /* Move to the next line */
	}
}
