#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '0';
	int dh = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (dh = '0'; dh <= '9'; dh++)
		{
		
			putchar(',');
			putchar(' ');
		
		}
	}
	putchar('\n');
	return (0);
}
