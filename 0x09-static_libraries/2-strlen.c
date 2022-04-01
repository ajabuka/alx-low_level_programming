#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be counted
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int array = 0;

	while (*(s + array) != '\0')
		array++;
	return (array);
}
