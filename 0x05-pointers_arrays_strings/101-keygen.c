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
	int r =0;
	int i = 0;
	time_t t;

	srand((unsigned int) time(NULL));
	while (i < 2772)
	{
		r = rand() % 128;
		if ((i + r) > 2772)
			break;
		i = i + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - i));
	return (0);
}
