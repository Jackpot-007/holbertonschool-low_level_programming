#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	while (s[len] != '\0') /* Get the length of the string */
	len++;

	for (i = 0; i < len / 2; i++) /* Swap characters */
	{
	temp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = temp;
	}
}
