#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: Standard input integer
 * Return: factorial of n, or -1 if n < 0
 * base factorial 0 is 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
