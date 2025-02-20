#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter); /* Print each letter in reverse */

	putchar('\n'); /* Print newline */

	return (0);
}
