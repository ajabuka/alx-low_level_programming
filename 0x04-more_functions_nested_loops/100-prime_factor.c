#include <stdio.h>

/**
 * main - finds all prime factors of a given number
 *
 * Return: Always 0.
 */

int main(void)
{
	long int a;
	long int n = 612852475143;

	for (a = 2; a <= n; a++)
	{
		if (n % a == 0)
		{
			n /= a;
			a--;
		}
	}
	printf("%ld\n", a);
	return (0);
}
