#include "main.h"

/**
 * print_alphabet - to print alphabet in lower case
 * This program use function prototypes to print
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int b = 'a';

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
