#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i;
	int j;  /* Declare j outside of the loop */
	char replacements[] = {'4', '3', '0', '7', '1'};
	char letters[] = {'a', 'e', 'o', 't', 'l'};

	/* Loop through each character of the string */
	for (i = 0; s[i] != '\0'; i++)
	{
	/* Check if the character matches any letter to be replaced */
	for (j = 0; j < 5; j++)
	/* Now the declaration of j is moved outside the loop */
	{
	if (s[i] == letters[j] || s[i] == (letters[j] - 32))
	/* Account for both lowercase and uppercase */
	{
	s[i] = replacements[j];  /* Replace with the corresponding number */
	break;  /* Exit the loop once replaced */
	}
	}
	}

	return (s);  /* Return the modified string */
}
