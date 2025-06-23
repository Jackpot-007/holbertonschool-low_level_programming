#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all single digit numbers of base 10 starting
 * from 0, followed by a new line.
 * Does not use variables of type char and only uses putchar.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
	putchar(x);
	}

	putchar('\n');

	return (0);
}
