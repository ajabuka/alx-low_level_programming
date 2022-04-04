#include "main.h"
#include <stdlib.h>

/**
 * _strdup - points to a new string which is a duplicate of the string
 * in a newly allocated space in memory
 * @str: Standard input string to be duplicated
 * Return: Pointer to the duplicated string or
 * NULL if str = NULL or if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);

	for (; *(str + i) != '\0'; i++)
		;

	i++;

	a = malloc(i * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (; j <= i; j++)
		*(a + j) = *(str + j);

	return (a);
}
