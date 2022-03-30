#include "main.h"

/**
 * sqrt_check - checks for the square root of a number.
 * @n: Standard input integer
 * @c: iterator
 * Return: square root or -1
 */

int sqrt_check(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + sqrt_check(n, c + 1));
}

/**
 * _sqrt_recursion - checks for natural square root of a number
 * @n: Standard input integer
 * Return: root of the Standard input
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (sqrt_check(n, 2));
}
