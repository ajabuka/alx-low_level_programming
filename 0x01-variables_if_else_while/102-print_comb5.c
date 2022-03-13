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
	int f = '0';

	for (c = '0'; c <= '9'; c++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			for (e = '0'; e <= '9'; e++)
			{
				for (f = '0'; f <= '9'; f++)
				{

					if ((c && d) || (e && f))
					{
						putchar(c);
						putchar(d);
						putchar(' ');
						putchar(e);
						putchar(f);
						if ((c == '9' && d == '9') && (e == '9' && f == '9'))
						break;
						
						if (c < '9')
						putchar(',');
						if (c < '9')
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
