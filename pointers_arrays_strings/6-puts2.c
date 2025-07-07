#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print all other characters in a string
 *
 * @str: pointer character
 */

void puts2(char *str)
{
	int length;
	int i;

	length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
