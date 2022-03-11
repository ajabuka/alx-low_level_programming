#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '0';
	int hd = 'a';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (hd = 'a'; hd <= 'f'; hd++)
	{
		putchar(hd);
	}
	putchar('\n');
	return (0);
}
