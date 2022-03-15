#include "main.h"

/**
 * print_last_digit - Prints the last digit of a value
 * @c: Standard input
 * Return: Always 0 (Success)
 */

int print_last_digit(int c)
{
	c = c % 10;
	if (c > 0)
	{
		_putchar(c + '0');
		return (c);
	}
	else
	{
		_putchar(-c + '0');
		return (-c);
	}
	_putchar('\n');
}
