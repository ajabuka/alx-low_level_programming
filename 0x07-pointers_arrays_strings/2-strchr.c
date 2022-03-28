#include "main.h"

/**
 * _strchr - locates the first occurrence of a character c in the string s
 * @s: pointer to the array of string to be scanned
 * @c: character to be searched in s
 * i = used to iterate through s
 * Return: pointer to the first occurrence of the charcater c.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	
	return ('\0');
}
