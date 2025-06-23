#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed
 * by a new line. Only uses putchar and all code is in main.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphareverse;

	alphareverse = 'z';

	while (alphareverse >= 'a')
	{

	putchar(alphareverse);
	alphareverse--;
	}

	putchar('\n');
	return (0);
}
