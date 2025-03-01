#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * If the string length is odd, it prints the last n characters.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Find the length of the string */
	while (str[length] != '\0')
	{
	length++;
	}

	/* If the length is even, start from the middle */
	if (length % 2 == 0)
	{
	start = length / 2;
	}
	else
	{
	start = (length + 1) / 2;
	}

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
	_putchar(str[start]);
	start++;
	}

	/* Print a new line */
	_putchar('\n');
}
