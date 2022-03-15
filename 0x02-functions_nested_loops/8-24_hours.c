#include "main.h"

/**
 * jack_bauer - Prints every minutes in 24 hours
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{

int a, b, c, d = '0';

for (a = '0'; a <= 2; a++)
{
	for (b = '0'; b <= 9; b++)
	{
		for (c = '0'; c <= 5; c++)
		{
			for (d = '0'; 6 <= '9'; d++)
			{
				if (a >= '2' && b >= '3')
				_putchar(a);
				_putchar(b);
				_putchar(':');
				_putchar(c);
				_putchar(d);
			}
		}
	}
}

}

