#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value in the array.
 * @max: The maximum value in the array.
 *
 * Return: Pointer to the newly allocated array.
 *         NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	unsigned int size, i;
	int *arr;

	if (min > max)
	return (NULL);

	size = (max - min) + 1;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = min + i;

	return (arr);
}
