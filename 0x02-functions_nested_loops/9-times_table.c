#include "main.h"

/**
 * times_table - Prints multiplication table to 9
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{

int a, b, e;

for (a = 48; a <= 57; a++)
{
	for (b = 48; b <= 57; b++)
	{
		(e = a * b);
		_putchar(',');
		_putchar(' ');
		if (e <= 57)
		{
			_putchar(e + 48);
		}
		else
		{
			_putchar((e / 10) + 48);
			_putchar((e % 10) + 48);
		}
	}
	_putchar('\n');

}

}

