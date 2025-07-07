#include "main.h"
#include <stdio.h>

/**
 * _puts - this prints a string followed by a new line
 *
 * @str: pointer characters
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
