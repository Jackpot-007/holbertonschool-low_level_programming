#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - print half a string, followed by a new line.
 *
 * @str: pointer character
 */

void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}
