#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as arguments.
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 if successful, 1 if a non-digit character is found
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0; /* Declare j before the loop to comply with C89 */

	/* If no number is provided, print 0 and exit */
	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	/* Loop through all arguments */
	for (i = 1; i < argc; i++)
	{
	/* Check if the argument contains only digits */
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j])) /* If a non-digit character is found */
	{
	printf("Error\n");
	return (1);
	}
	}

	/* Convert argument to integer and add to sum */
	sum += atoi(argv[i]);
	}

	/* Print the sum */
	printf("%d\n", sum);

	return (0);
}
