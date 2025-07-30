#include "main.h"
#include <stdio.h>

/**
 * print_square - a function that prints a square, followed by a new line.
 *
 * @size: is the size of the square.
 */

void print_square(int size)
{
	int i, iu;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 0; i < size; i++)
		{
			for (iu = 0; iu < size; iu++)
			{		
			_putchar('#');
			}
		_putchar('\n');
		}
	}
}
