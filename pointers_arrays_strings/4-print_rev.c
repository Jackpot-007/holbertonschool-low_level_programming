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
	const char *p = s;

	while (*p) ++p;

	while (p != s) _putchar(*--p);

	_putchar('\n');

}
