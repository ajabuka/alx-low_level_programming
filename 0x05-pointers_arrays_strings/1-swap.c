#include "main.h"
/**
 * swap_int - resets integer to 98
 * @a: pointer to be swaped with the other
 * @b: pointer to be swaped with the other
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
