#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int a, c, d = '0';
	int b = '1';

	for (d = '0'; d <= '9'; d++)
	{

		for (a = '0'; a <= '9'; a++)
		{
			_putchar(a);
		}
		for (c = '0'; c <= '4'; c++)
		{
			_putchar(b);
			_putchar(c);
		}
	}
	_putchar('\n');
}
