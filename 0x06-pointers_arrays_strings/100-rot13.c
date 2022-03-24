#include "main.h"

/**
 * rot13 - encode the string using rot13
 * which rotates the alphabet in 13 places
 * @s: Standard input string
 * alpha = The alpabebet listed in UPPERCASE and lowercase
 * rot13 = equivalent of each alphabet characters
 * n = used to loop through characters in the standard input array
 * i = used to loop through alpha & rot13
 * Return: Standard output string
 */

char *rot13(char *s)
{
	int n, i;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; (*(s + n) != '\0'); n++)
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + n) == alpha[i])
			{
				*(s + n) = rot13[i];
				break;
			}
		}
	}

	return (s);
}
