#include "main.h"
#include <stdio.h>

/**
 * main - Tests the add function
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n); /* Expected output: 98 */
	return (0);
}
