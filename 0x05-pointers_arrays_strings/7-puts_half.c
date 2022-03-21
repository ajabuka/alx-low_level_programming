#include "main.h"

/**
 * puts_half - prints every half of the string
 * @str: string to be printed half
 * Return: Nothing
 */

void puts_half(char *str)
{
	int n, i;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n / 2 == 1)
			i = n / 2;
		else
			i = (n - 1) / 2;
	}
	for (i++; i < n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
