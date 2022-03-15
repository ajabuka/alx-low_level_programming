#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 * @c: Standard input
 * Return: Always 0 (Success)
 */

int _abs(int c)
{
	if (c >= 0)
	{
		printf("%d", c);
	}
	else
	{
		c = (c * -1);
		printf("%d", c);
	}
	_putchar('\n');
	return (0);
}
