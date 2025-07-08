#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a string, in reverse, followed by a new line
 *
 * @s: pointer character
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	if (s == NULL)
	{
		_putchar('\n');
		return;
	}

	length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
