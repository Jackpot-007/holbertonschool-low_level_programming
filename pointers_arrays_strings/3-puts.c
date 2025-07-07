#include "main.h"
#include <unistd.h>
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
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
