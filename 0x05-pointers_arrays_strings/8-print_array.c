#include "main.h"
#include <stdio.h>

/**
 * print_array - prints out array of integers
 * @a: pointer in the business
 * @n: number of the array
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
