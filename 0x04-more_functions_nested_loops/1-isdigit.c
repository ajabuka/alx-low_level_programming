#include "main.h"

/**
 * _isdigit - Checks if a value is a digit
 * @c: Stardard input
 * Return: 0
 */

int _isdigit(int c);
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
