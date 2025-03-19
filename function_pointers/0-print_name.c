#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Calls a function to print a name
 * @name: The name to be printed
 * @f: Pointer to a function that takes a string and prints it
 *
 * Description: This function receives a name and a function pointer.
 * If both are valid (not NULL), it calls the function pointer `f`
 * and passes `name` as an argument. The function `f` is expected
 * to handle the printing of the name in a specific format.
 * If either `name` or `f` is NULL, the function does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
