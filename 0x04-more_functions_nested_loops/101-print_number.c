#include "main.h"

/**
 * print_number - prints out integers
 * @n: Standard input (integer)
 * Return: Always 0.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(n + '0');
	}
	else
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
