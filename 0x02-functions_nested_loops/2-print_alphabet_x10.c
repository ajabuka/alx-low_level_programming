#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet in lower case 10 times
 * This program use function prototypes to print
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int b = 'a', a;

	for (b = 'a'; b <= 'z';)
	{
		{
			a = '0';
			while (a <= '9')
			_putchar(b);
		}
		b++;
	}
	_putchar('\n');
}
