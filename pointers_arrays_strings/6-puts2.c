#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * puts2 - prints every other character of a string, starting
 *
 * @s : pointer character
 */

void puts2(char *s)
{
	int length = 0;
	int i;

	if (s == NULL)
	{
		char nl = '\n';
		write(1, &nl, 1);
		return;
	}

	length = strlen(s);int length = 0;
	int i;

	if (s == NULL)
	{
			char nl = '\n';
			write(1, &nl, 1);
			return;
	}

	length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
			write(1, &s[i], 1);
	}
	{
			char nl = '\n';
			write(1, &nl, 1);
	}
}
