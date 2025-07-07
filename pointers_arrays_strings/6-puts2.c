#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print all other characters in a string
 *
 * @str: pointer character
 */

void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			putchar(s[a]);
		}
	}
	putchar('\n');
}
