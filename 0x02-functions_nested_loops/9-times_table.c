#include "main.h"

/**
 * times_table - Prints multiplication table to 9
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{

int a = '0';
int e;

for (a = '0'; a <= '9'; a++)
{
	if (a == '0')
	{
		(e = a * '0');
		_putchar(e);
		_putchar(',');
		_putchar(' ');
	}
	else if (a == '1')
	{
		(e = a * '1');
		_putchar(e);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');

}

}

