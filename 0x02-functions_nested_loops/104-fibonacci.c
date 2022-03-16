#include <stdio.h>

/**
 * main - Entry point
 * Printing Fibonacci series, this adds previous two numbers as next
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Fn;
	unsigned long int t1 = 1;
	unsigned long int t2 = 2;
	unsigned long int nt;

	printf("%lu, %lu", t1, t2);
	for (Fn = 3; Fn <= 98; ++Fn)
	{
		nt = t1 + t2;
		t1 = t2;
		t2 = nt;
		printf(", %lu", nt);
	}
	printf("\n");
	return (0);
}
