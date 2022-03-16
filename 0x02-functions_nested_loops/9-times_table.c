#include "main.h"

/**
 * times_table - Prints multiplication table to 9
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{

int a = 48;
int e;

for (a = 48; a <= 57; a++)
{
	if (a == 48)
	{
		(e = a * 48);
		_putchar(e);
		_putchar(',');
		_putchar(' ');
	}
	else if (a == 49)
	{
		(e = a * 49);
		_putchar(e);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');

}

}

