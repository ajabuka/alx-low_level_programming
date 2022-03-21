#include "main.h"

/**
 * _strcpy - copy strings
 * @dest: pointer to string
 * @src: pointer to string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
		if (*src == '\0')
			break;
	}

	return (dest);
}
