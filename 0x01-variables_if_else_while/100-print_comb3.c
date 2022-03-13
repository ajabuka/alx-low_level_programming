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
			if (ch != dh && ch < dh)
			{
				putchar(ch);
				putchar(dh);
				if (ch == '9' && dh == '9')
				{
					break;
				}

				if (ch < '8')
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
