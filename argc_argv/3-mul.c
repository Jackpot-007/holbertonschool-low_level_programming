#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int result;

	/* Check if exactly two arguments are provided */
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	/* Convert arguments to integers and multiply */
	result = atoi(argv[1]) * atoi(argv[2]);

	/* Print the result */
	printf("%d\n", result);

	return (0);
}
