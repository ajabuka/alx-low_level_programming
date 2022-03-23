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
	int n0 = 0, n1 = 0;

	while (*(dest + n0) != '\0')
	{
		n0++;
	}

	while (n1 < n)
	{
		*(dest + n0) = *(src + n1);
		if (*(src + n1) == '\0')
			break;
		n0++;
		n1++;
	}

	return (dest);
}
