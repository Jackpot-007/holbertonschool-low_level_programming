#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0'); /* Convert integer to its corresponding ASCII character */
	if (i != 9)
	{
	putchar(','); /* Print comma */
	putchar(' '); /* Print space */
	}
	}
	putchar('\n'); /* Newline at the end */
	return (0);
}
