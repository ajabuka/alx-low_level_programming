#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 without 2 and 4
 *
 * Return: 0
 */

void print_numbers(void)
{
	int n = '0';

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
