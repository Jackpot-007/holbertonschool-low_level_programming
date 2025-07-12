#include "main.h"
#include <string.h>

/**
 * *_memcpy - function copies n bytes from memory area src to memory area dest
 *
 * @dest: memory area dest
 *
 * @src: memory area src
 *
 * @n: character byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
