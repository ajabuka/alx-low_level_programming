#include "main.h"

/**
 * _strpbrk - locate the first occurrence for any of a set of bytes in a string
 * @s: pointer to the string to be scanned
 * @accept: accepted bytes
 * i = used to iterate through s
 * j = used to loop through accept
 * Return: number of the accepted bytes
 */

char _strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
