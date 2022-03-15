#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks if an alphabet is in lower case
 * @c: stardard input
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
