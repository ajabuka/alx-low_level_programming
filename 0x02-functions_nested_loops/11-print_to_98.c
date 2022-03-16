#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers to 98
 * @n: Standard input
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{

if (n < 98)
{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
}
else
{
	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}
}
}
