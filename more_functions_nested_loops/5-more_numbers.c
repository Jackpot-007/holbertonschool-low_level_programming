#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, 10 times.
 */
void more_numbers(void)
{
	int row, num;

	for (row = 0; row < 10; row++)  /* Repeat 10 times */
	{
	for (num = 0; num <= 14; num++)
	{
	if (num >= 10)  /* If number is greater than 9, print the tens digit */
	_putchar('1'); /* Print tens digit (1) */
	_putchar((num % 10) + '0');  /* Print ones digit (0-9) */
	}
	_putchar('\n');  /* New line after each row */
	}
}
