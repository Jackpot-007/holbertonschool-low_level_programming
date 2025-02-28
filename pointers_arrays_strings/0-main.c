#include "main.h"
#include <stdio.h>

/**
 * main - Test the reset_to_98 function.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n); /* Imprime el valor original */
	reset_to_98(&n);
	printf("n=%d\n", n); /* Debe imprimir 98 */
	return (0);
}
