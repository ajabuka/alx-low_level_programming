#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '0';

	for (ch = '0'; ch < '9'; ch++)
	{
	
		putchar((ch / 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\0');
	return (0);
}
