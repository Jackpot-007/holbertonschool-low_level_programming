#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line.
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)  /* Loop through numbers from 0 to 9 */
	_putchar(c);  /* Print one character at a time */

	_putchar('\n');  /* Print newline character */
}
