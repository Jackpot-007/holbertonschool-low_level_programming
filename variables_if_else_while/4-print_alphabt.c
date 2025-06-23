#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in lowercase except 'q' and 'e', followed
 * by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
	if (x != 'q' && x != 'e')
	{
	putchar(x);
	}
	}

	putchar('\n');

	return (0);
}
