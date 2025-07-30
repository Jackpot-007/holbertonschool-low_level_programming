#include "main.h"
#include <stdio.h>

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *
 * @size: is the size of the triangle
 */

void print_triangle(int size)
{
	int a, i;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (i = size - a; i > 0; i--)
				_putchar(' ');

			for (i = 0; i < a; i++)
				_putchar('#');

			if (a == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
