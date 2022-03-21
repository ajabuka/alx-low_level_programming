#include "main.h"

/**
 * _strcpy - copy strings
 * @dest: pointer to string
 * @src: pointer to string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	size_t n = 0, i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
