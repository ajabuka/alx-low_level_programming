#include "main.h"

/**
 * print_times_table - Prints multiplication table to n
 * @n: Stardard input
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{

int a, b, e;

if (n >= 0 && n <= 15)
{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
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
