#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it
 * with a specific char.
 *
 * @size: the size of the array to be initialized.
 *
 * @c: character c
 *
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
