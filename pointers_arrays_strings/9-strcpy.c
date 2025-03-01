#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including
 * the terminating null byte.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy each character from src to dest */
	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}

	/* Add the null terminator to dest */
	dest[i] = '\0';

	return (dest);  /* Corrected return statement */
}
