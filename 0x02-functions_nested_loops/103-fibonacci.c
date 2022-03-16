#include <stdio.h>

/**
 * main - Entry point
 * Printing Fibonacci series, this adds previous two numbers as next
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Fn;
	long int t1 = 1;
	long int t2 = 2;
	long int nt;
	long int sum = 0;

	for (Fn = 3; ++Fn;)
	{
		nt = t1 + t2;
		t1 = t2;
		t2 = nt;
		{
			if (nt % 2 == 0)
			{
				if (nt >= 4000000)
					break;
				sum = sum + nt;
				printf("%ld", sum);
			}
		}
	}
	printf("\n");
	return (0);
}
