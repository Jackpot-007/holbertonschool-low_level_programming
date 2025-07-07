#include "main.h"
#include <stdio.h>

/**
 * _puts - this prints a string followed by a new line
 *
 * @str: pointer characters
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
