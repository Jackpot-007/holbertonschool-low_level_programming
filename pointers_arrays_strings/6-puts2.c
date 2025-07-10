#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting
 *
 * @s : pointer character
 */

void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			printf("%c", s[a]);
		}
	}
	printf("\n");
}
