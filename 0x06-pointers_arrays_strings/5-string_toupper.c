#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @s: String input
 * Return: Standard output in uppercase
 * n = number of characters in the string
 */

char *string_toupper(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		if ((*(s + n) >= 'a') || (*(s + n) <= 'z'))
			*(s + n) = *(s + n) - 32;
		n++;
	}

	return (n);
}
