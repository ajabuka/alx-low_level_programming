#include "main.h"

/**
 * rev_string - creates a pointer that reverses strings
 * @s: pointer of the string to be reversed
 * Return: Nothing
 */

void rev_string(char *s)
{
	int n = 0, i, j;
	char *str, temp;

	for (n = 0; s[n] != '\0'; n++)

	str = s;

	for (i = 0; i < (n - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
