#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - randomly generates password
 *
 * Return: Always 0.
 */

int main(void)
{
	int r = i = 0;
	int n;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";

	char password[n];

	r = rand() % 4;

	for (i = 0; i < n; i++)
	{
		if (r == 1)
		{
			password[i] = number[rand() % 10];
			r = rand() % 4;
			printf("%c", password[i]);
		}
		else if (r == 2)
		{
			password[i] = symbols[rand() % 8];
			r = rand() % 4;
			printf("%c", password[i]);
		}
		else if (r == 3)
		{
			password[i] = LETTER[rand() % 26];
			r = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			r = rand() % 4;
			printf("%c", password[i]);
		}
	}
	return (0);
}
