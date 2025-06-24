#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit
 * numbers, separated by ", ", in ascending order.
 * Only uses putchar (maximum four times), no char variables.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	if (num == '9')
	continue;

	putchar(',');
	putchar(' ');
	}

	putchar('\n');

	return (0);
}
