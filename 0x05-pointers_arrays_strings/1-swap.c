#include "main.h"
/**
 * swap_int - Swaps to integers
 * @a: pointer to be swaped with the other
 * @b: pointer to be swaped with the other
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
