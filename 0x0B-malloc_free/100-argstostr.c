#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: double pointer array of arguments in ac
 * Return: Pointer to new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int i = 0, j = 0, k = 0, n = 0;

	if (ac < 1 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		for (; av[i][j] != '\0'; j++)
			n++;
		n++;
	}

	a = malloc(n * sizeof(char));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (; k < n; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			a[k] = '\n';
			i++;
			k++;
			j = 0
		}
		if (k < n -1)
			a[k] = av[i][j];
	}

	a[k] = '\0';
	return (a);
}
