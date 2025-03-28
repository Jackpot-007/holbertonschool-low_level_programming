#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function
 * @array: Pointer
 * @size: Size~C
 * @cmp: Pointer
 *
 * Return: -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
	return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
