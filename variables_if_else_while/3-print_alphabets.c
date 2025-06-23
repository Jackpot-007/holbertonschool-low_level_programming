#include <stdio.h>
#include <stdlib.h>

/**
 * main - Declare a variable and initialize it with the first member
 * of the range [a - z] and [A - Z]  in lowercase, and then
 * in uppercase
 *
 * Return: Always (0)
 */

int main(void)
{
	int i = 'a';
	int j = 'A';

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar (i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
	putchar (j);
	}

	putchar ('\n');

	return (0);
}
