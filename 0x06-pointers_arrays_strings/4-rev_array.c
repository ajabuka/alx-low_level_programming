#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: Nothing
 * s = array from the start
 * e = array from the end
 * rvv = used to reverse the values
 */

void reverse_array(int *a, int n)
{
	int s, e, rvv;

	for (s = 0; s < n - 1; s++)
	{
		for (e = s + 1; e > 0; e--)
		{
			rvv = *(a + e);
			*(a + e) = *(a + (e - 1));
			*(a + (e - 1)) = rvv;
		}
	}
}
