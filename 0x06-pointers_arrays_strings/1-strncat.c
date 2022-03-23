#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: String destination
 * @src: String source
 * @n: amount of byte used from src
 * Return: dest
 */

char *_strncat(char *dest, char *src int n)
{
	int n1 = 0, n2 = 0;

	while (*(dest + n1) != '\0')
	{
		n1++;
	}

	while (n2 < n)
	{
		*(dest + n1) = *(src + n2);
		if (*(src + n2) == '\0')
			break;
		n1++;
		n2++;
	}

	return (dest);
}
