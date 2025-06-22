#include <stdio.h>

/**
 * main - Declare a variable and initialize it with the first member
 * of the range [a - z]
 *
 * Return: Always (0)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{

	putchar(alphabet);

	alphabet++;
	}

	putchar('\n');
	return (0);
}
