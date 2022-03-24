#include "main.h"

/**
 * leet - transpose characters for example LEET = 1337
 * @s: Standard input of string array
 * n = used to loop through characters in the string array
 * lcc = array of lower case characters to be transposed
 * ucc = array of upper case characters to be transposed
 * num = array of character to transpose to
 * i = used to loop through transposing characters
 * Return: (s) Standard output after transposing
 */

char *leet(char *s)
{
	int n = 0, i;
	int lcc[] = {'a', 'e', 'o', 't', 'l'};
	int ucc[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	for (n = 0; *(s + n) != '\0'; n++)
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + n) == lcc[i] || *(s + n) == ucc[i])
			{
				*(s + n) = num[i];
				break;
			}
		}
	}

	return (s);
}
