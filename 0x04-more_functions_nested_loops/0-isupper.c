#include "main.h"

/**
 * _isupper - Checks if an alphabet is in upper case
 * @c: Stardard input
 * Return: 0
 */

int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
