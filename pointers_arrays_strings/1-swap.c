#include "main.h"

/**
 * swap_int - exchange the values of two integers.
 *
 * @a: character of pointer a.
 *
 * @b: character of pointer b.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
