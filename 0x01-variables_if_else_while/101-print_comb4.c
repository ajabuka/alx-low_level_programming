#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = '0';
	int d = '0';
	int e = '0';

	for (c = '0'; c <= '9'; c++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			for (e = '0'; e <= '9'; e++)
			{
				if ((c != d && c < d) && (c != e && c < e) && (d != e && d < e))
				{
					putchar(c);
					putchar(d);
					putchar(e);
					if ((c == '9' && d == '9') && e == '9')
					{
						break;
					}
					if (c < '7')
					putchar(',');
					if (c < '7')
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
