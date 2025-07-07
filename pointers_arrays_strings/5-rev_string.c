#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 *
 * @s: pointer character
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	char temp;
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
