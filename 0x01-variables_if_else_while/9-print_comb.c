#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		++ch;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
