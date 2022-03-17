#include "main.h"

/**
 * print_line - prints line based on the integer value inputed
 * @n - Standard input integer
 * Return: 0
 */

void print_line(int n)
{
	int o;

	for (o = 0; o < n; o++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
