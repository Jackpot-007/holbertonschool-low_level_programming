#include <stdio.h>

/**
 * main - Prints all single-digit numbers of base 10 starting from 0,
 * using only putchar and without char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	putchar(num + '0'); /* Convert integer to its ASCII character */

	putchar('\n'); /* Print newline */

	return (0);
}
