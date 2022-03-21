#include "main.h"

/**
 * rev_string - creates a pointer that reverses strings
 * @s: pointer of the string to be reversed
 * Return: Nothing
 */

void rev_string(char *s);
{
	int n = 0, i;
	char *end_ptr, ch;

	*s = s;
	end_ptr = s;

	for (i = 0; i < s[n] - 1; i++)
		end_ptr++;

	for (i = 0; i < s[n] / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *s;
		*s = ch;

		*s++;
		*end_ptr--;
	}
}
