#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* Check if at least one number is provided */
	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	/* Loop through each argument */
	for (i = 1; i < argc; i++)
	{
	/* Check if each argument contains only digits */
	for (int j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j])) /* Non-digit character */
	{
	printf("Error\n");
	return (1);
	}
	}

	/* Convert string to integer and add to sum */
	sum += atoi(argv[i]);
	}

	/* Print the sum */
	printf("%d\n", sum);

	return (0);
}
