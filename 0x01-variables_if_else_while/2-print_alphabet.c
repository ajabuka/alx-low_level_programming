#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha;
	
	for(int alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
		putchar("\n");
		getch();
	}
	return (0);
}
