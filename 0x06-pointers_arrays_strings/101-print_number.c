#include "main.h"

/**
 * print_number - Prints out and integer
 * @n: Standard input integer
 * a = used to hold integers
 * b = used to solve integers with more than one character
 * n1 = value of item in the array position
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int a, b, n1;

	if (n < 0)
	{
		_putchar('-');
		a = n * -1;
	}
	else
	{
		a = n;
	}
	
	b = a;
	n1 = 1;

	while (b > 9)
	{
		b /= 10;
		n1 *= 10;
	}

	for (; n1 >= 1; n1 /= 10)
	{
		_putchar(((a / n1) % 10) + '0');
	}
}
