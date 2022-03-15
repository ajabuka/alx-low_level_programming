#include "main.h"

/**
 * _isalpha - Checks if an alphabet is a letter, lower case or uppercase
 * @c: stardard input
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
