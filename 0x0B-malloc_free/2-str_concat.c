#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings s1 and s2 together
 * @s1: first standard input string
 * @s2: second standard input string
 * Return: Pointer to newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
 * or NULL if erroe
 * r
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		;

	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	k = i + j + 1;

	a = malloc(sizeof(char) * k);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (l = 0; l < i; l++)
		a[l] = s1[l];

	for (l = 0; l < j; l++)
		a[l + i] = s2[l];

	a[i + j] = '\0';
	return (a);
}
