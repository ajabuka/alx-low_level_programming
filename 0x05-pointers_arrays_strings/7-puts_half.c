#include "main.h"

/**
 * puts_half - prints every half of the string
 * @str: string to be printed half
 * Return: Nothing
 */

void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n = (str[n] / 2))
			_putchar(*(str + n));
	}
	_putchar('\n');
}
