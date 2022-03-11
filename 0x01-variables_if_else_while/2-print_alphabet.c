#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for(int alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		alpha = tolower(alpha);
		putchar(alpha);
	}
	return (0);
}
