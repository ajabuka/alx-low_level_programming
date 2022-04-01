#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: 0 if equal, positive if s1 > s2, and negative if s1 < s2.
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, rv = 0;

	while (rv == 0)
	{
		if ((*(s1 + n) == '\0') && (*(s2 + n) == '\0'))
			break;
		rv = *(s1 + n) - *(s2 + n);
		n++;
	}

	return (rv);
}
