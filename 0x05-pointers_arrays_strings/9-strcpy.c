#include "main.h"

/**
 * _strcpy - copy strings
 * @dest: pointer to string
 * @src: pointer to string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;


	while (n >= 0)
	{
		*(dest + n) = *(src + n);
		if (*(src + n) == '\0')
			break;
		n++;
	}

	return (dest);
}
