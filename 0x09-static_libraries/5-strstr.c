#include "main.h"

/**
 * _strstr - locates the first occurrence of a substring
 * @haystack: The main string to be scanned
 * @needle: the small string to be searched within the haystack string
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *chaystack;
	char *cneedle;

	while (*haystack != '\0')
	{
		chaystack = haystack;
		cneedle = needle;

		while (*haystack != '\0' && *cneedle != '\0' && *haystack == *cneedle)
		{
			haystack++;
			cneedle++;
		}
		if (!*cneedle)
			return (chaystack);
		haystack = chaystack + 1;
	}
	return (0);
}
