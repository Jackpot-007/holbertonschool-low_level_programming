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
	int length;
	int i;

	if (s == NULL)
		return;

	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
