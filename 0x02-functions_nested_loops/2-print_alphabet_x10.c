#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet in lower case 10 times
 * This program use function prototypes to print
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int b, a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		{
			b = '0';
			for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		}
		_putchar('\n');
	}
}
