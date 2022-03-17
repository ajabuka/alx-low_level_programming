#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int a = 0;
	int d = '0';

	for (d = '0'; d <= '9'; d++)
	{

		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
