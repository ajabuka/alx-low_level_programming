#include <stdio.h>

/**
 * main - Entry point
 * Printing Fibonacci series, this adds previous two numbers as next
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int t1 = 1;
	long int t2 = 2;
	long int nt = 0;
	long int sum = 0;

	while (nt <= 4000000)
	{
		nt = t1 + t2;
		t1 = t2;
		t2 = nt;
		{
			if (nt % 2 == 0)
			{
				sum = sum + nt;
				printf("%ld", sum);
			}
		}
	}
	printf("\n");
	return (0);
}
