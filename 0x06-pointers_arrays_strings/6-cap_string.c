#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: Standard input
 * Return: Standard output string in s
 * sep = separators of words
 * n = number of characters in an array or string
 * i = used to loop through seprators
 */

char *cap_string(char *s)
{
	int n = 0, i;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, '(', ')', '{', '}'};

	if (*(s + n) >= 'a' && *(s + n) <= 'z')
		*(s + n) = *(s + n) - 32;
	n++;

	while (*(s + n) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + n) == sep[i])
			{
				if ((*(s + (n + 1)) >= 'a') && (*(s + (n + 1)) <= 'z'))
					*(s + (n + 1)) = *(s + (n + 1)) - 32;
				break;
			}
		}
		n++;
	}
	return (s);
}
