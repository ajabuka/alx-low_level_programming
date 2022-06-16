#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: String destination
 * @src: String source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int n0 = 0, n1 = 0;

	while (*(dest + n0) != '\0')
	{
		n0++;
	}

	while (n1 >= 0)
	{
		*(dest + n0) = *(src + n1);
		if (*(src + n1) == '\0')
			break;
		n0++;
		n1++;
	}

	return (dest);
}
