#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 * n = 2 dimensional array
 * Return: pointer to a 2 dimensional array of integers
 * returns NULL on failure of if either of width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **n;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	n = malloc(sizeof(int *) * height);
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		n[i] = malloc(width * sizeof(int));
		if (n[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(n[j]);
			free(n);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			n[i][j] = 0;
		}
	}
	return (n);
}
