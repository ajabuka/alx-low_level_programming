#include <stdio.h>

/**
 * main - Entry point
 * Printing Fibonacci series, this adds previous two numbers as next
 * Return: Always 0 (Success)
 */

int main (void)
{
	int Fn;
	int t1 = 1;
	int t2 = 2;
	int nt;

	printf("%d, %d, ", t1, t2);
	for (Fn = 3; Fn <= 50; ++Fn)
	{
		nt = t1 + t2;
		t1 = t2;
		t2 = nt;
		printf("%d, ", nt);
	}
	printf("\n");
	return (0);
}
