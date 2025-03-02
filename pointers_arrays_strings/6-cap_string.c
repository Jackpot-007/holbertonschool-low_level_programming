#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int cap_next = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
	int j = 0;

	/* Check if current character is a separator */
	while (separators[j] != '\0')
	{
	if (str[i] == separators[j])
	{
	cap_next = 1;
	break;
	}
	j++;
	}

	/* Capitalize the letter if needed */
	if (cap_next && str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - ('a' - 'A');
	}

	/* Update flag (only first letter of word should be capitalized) */
	cap_next = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	str[i] == '}');

	i++;
	}

	return (str);
}
