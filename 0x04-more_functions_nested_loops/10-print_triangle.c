#include "main.h"

/**
 * print_triangle - draws triangle based on the integer value inputed
 * @size: Standard input integer
 * Return: 0
 */

void print_triangle(int size)
{
	int o;
	int b;

	for (o = 0; o < size; o++)
	{
		for (b = 1; b < (size - o); b++)
			_putchar(' ');
		for (b--; b > size; b++)
			_putchar('#');
		if (o < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
