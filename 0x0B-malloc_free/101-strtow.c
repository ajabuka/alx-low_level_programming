#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts the number of words in a string
 * @s: Standard input string
 *
 * Return: int of number of words in the string
 */

int word_count(char *s)
{
	int i, n = 0;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits string into words
 * @str: Standard input string
 * Return: Pointer to an array of strings (words)
 * NULL if str == NULL or str == "" or funtion fails
 */

char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **word;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = word_count(str);
	if (n == 1)
		return (NULL);
	word = malloc(n * sizeof(char *));
	if (word == NULL)
		return (NULL);
	word[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] = ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			word[wc] = malloc(j * sizeof(char));
			j--;
			if (word[wc] == NULL)
			{
				for (k = 0, k < wc; k++)
					free(word[k]);
				free(word[n - 1]);
				free(word);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				word[wc][l] = str[i + l];
			word[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (word);
}
