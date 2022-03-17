#include "main.h"

/**
 * print_square - prints a square
 * @size: length of square in integer
 * Return: 0
 */

void print_square(int size)
{
	int d = 0;
	int s = 0;

	for (d = 0; d < size; d++)
	{

		for (s = 0; s < size; s++)
		{
			_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
