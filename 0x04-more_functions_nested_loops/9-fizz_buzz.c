#include <stdio.h>

/**
 * main - prints Fizz for multiples of 3 Buzz for multiples of 5
 * and prints FizzBuzz for multiples of both
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		if ((n % 3 != 0) || (n % 5 != 0))
			printf("%d ", n);
	}
	printf("\n");
}
