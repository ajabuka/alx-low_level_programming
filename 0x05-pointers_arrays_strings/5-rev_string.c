#include "main.h"

/**
 * rev_string - creates a pointer that reverses strings
 * @s: pointer of the string to be reversed
 * Return: Nothing
 */

void rev_string(char *s)
{
	int n = 0, i;

	for (n = 0; n < s[n] - 1; n++)
	{
		if (s[n] == '\0')
			break;
	}

	for (i = s[n]; i >= 0; i--)
	{
		*s = *(s + i);
	}
}
