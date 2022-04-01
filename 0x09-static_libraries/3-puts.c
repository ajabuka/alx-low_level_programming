#include "main.h"

/**
 * _puts - prints out a string
 * @str: string to be printed
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int n = 0;

	while (n >= 0)
	{
		if (str[n] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[n]);
		n++;
	}
}
