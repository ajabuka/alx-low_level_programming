#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array to be created
 * @c: specific char that initializes the array
 * Return: Pointer to the array or NULL if size = 0 or if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(c));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(a + i) = c;

	return (a);
}
