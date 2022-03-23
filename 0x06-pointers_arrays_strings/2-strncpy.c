#include "main.h"

/**
 * _strncpy - copies string based on specified byte
 * @dest: String Destination
 * @src: String Source
 * @n: byte
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int n1 = 0;

	while (n1 < n)
	{
		*(dest + n1) = *(src + n1);
		if (*(src + n1) == '\0')
			break;
		n1++;
	}

	return (dest);
}
