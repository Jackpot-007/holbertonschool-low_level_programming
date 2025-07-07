#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copy the string pointed to by src
 *
 * @dest: pointer character
 *
 * @src: pointer character
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
