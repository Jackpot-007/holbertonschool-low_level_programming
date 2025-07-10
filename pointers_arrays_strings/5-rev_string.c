#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 *
 * @s: pointer character
 */

void rev_string(char *s)
{
	char *end, temp;

	end = s;

	while (*end != '\0')
	{
		end++;
	}

	end--;
	while (s < end)
	{
		temp = *end;
		*end = *s;
		*s = temp;
		s++;
		end--;
	}
}
