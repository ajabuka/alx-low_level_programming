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
	int eh = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (dh = '0'; dh <= '9'; dh++)
		{
			for (eh = '0'; eh <= '9'; eh++)
			{
				if ((ch != dh && ch < dh) && (ch != eh && ch < eh) && (dh != eh && dh < eh))
				{
					putchar(ch);
					putchar(dh);
					putchar(eh);
					if ((ch == '9' && dh == '9') && eh == '9')
					{
						break;
					}
					if (ch < '8')
					putchar(',');
					if (ch < '8')
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
