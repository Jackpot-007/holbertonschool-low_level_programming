#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - a function that
 * prints the numbers, from 0 to 9,
 * followed by a new line.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar((i % 10) + '0');
	}

	_putchar('\n');
}
