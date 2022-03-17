#include "main.h"

/**
 * print_diagonal - draws diagonals based on the integer value inputed
 * @n: Standard input integer
 * Return: 0
 */

void print_diagonal(int n)
{
	int o;
	int b;
	
	for (o = 0; o < n; o++)
	{
		for (b = 0; b < o; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
