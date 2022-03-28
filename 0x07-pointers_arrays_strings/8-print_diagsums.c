#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sums the diagonals of a square matrix of integers
 * @a: Pointer to the standard input integers
 * size: size of the matrix
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, diagsum1 = 0, diagsum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			diagsum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			diagsum2 += *(a + i);
	}
	printf("%d, %d\n", diagsum1, diagsum2);
}
