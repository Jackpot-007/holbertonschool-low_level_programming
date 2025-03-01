#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed.
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0') /* Find length of the string */
	len++;

	for (len--; len >= 0; len--) /* Print string in reverse */
	_putchar(s[len]);

	_putchar('\n');
}
