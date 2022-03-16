#include "main.h"

/**
 * times_table - Prints multiplication table to 9
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{

int a, b, e;

for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
		(e = a * b);
		if (e <= '9')
		{
			_putchar(' ');
			_putchar(e + '0');
		}
		else
		{
			_putchar((e / 10) + '0');
			_putchar((e % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');

}

}

