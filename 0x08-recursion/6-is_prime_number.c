#include "main.h"

/**
 * prime_check - acertains if number is a prime number
 * @n: Standard input
 * @c: iterator
 * Return: 1 if prime number else 0
 */

int prime_check(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime_check(n, c + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: Standard input integer
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, 2));
}
