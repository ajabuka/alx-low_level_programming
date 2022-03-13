#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c = 48;
int d = 48;
int e = 48;
int f = 48;
int g;
int h;

for (c = 48; c <= 58; c++)
{
	for (d = 48; d <= 58; d++)
	{
		for (e = 48; e <= 58; e++)
		{
			for (f = 48; f <= 58; f++)
			{
				g = (c * 10) + d;
				h = (e * 10) + f;
				if (g < h)
				{
					putchar(c);
					putchar(d);
					putchar(' ');
					putchar(e);
					putchar(f);
					if ((c == 57 && d == 56) && (e == 57 && f == 57))
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}

