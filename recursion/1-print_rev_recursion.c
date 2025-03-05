#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Pointer to the string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')  /* Base case: end of the string */
	return;

	_print_rev_recursion(s + 1);  /* Recursive call with next character */
	_putchar(*s);  /* Print character after recursion */
}
