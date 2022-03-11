#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int rv;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		rv = strrev(ch);
		putchar(rv);
	}
	putchar('\n');
	return (0);
}
