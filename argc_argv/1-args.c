#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Argument not used */
	printf("%d\n", argc - 1); /* Subtract 1 to exclude the program name */
	return (0);
}
