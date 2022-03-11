#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 0;

	for (ch = 0; ch < 10;)
	{
		putchar(ch + '0');
		{
			putchar(',');
			putchar(' ');
		}

	ch++;
	}
	putchar('\n');
	return (0);
}
