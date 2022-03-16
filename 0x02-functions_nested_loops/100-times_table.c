#include "main.h"

/**
 * print_times_table - Prints multiplication table to n
 *
 * Return: Always 0 (Success)
 */

void print_times_table(void)
{

int a, b, e, n = 0;

if (n >= 0 && n <= 15)
{
	for (a = 0; a <= n; n++)
	{
		for (b = 0; b <= n; n++)
		{
			(e = a * b);
			if (e <= 9)
			{
				if (b >= 1)
				_putchar(' ');
				_putchar(e + '0');
			}
			else if (e <= 99)
			{
				_putchar(' ');
				_putchar((e / 10) + '0');
				_putchar((e % 10) + '0');
			}
			else
			{
				_putchar((e / 100) + '0');
				_putchar(((e / 10) % 10) + '0');
				_putchar((e % 10) + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');

}

}

