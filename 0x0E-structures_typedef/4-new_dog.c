#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new_dog and NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, n, o;
	dog_t *n_dog;

	if (n_dog == NULL || name == NULL || owner == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog = malloc(sizeof(*n_dog));

	for (n = 0; name[n]; n++)
		;

	for (o = 0; owner[o]; o++)
		;

	(*n_dog).name = malloc(n + 1);
	(*n_dog).owner = malloc(o + 1);

	if ((*n_dog).name == NULL || (*n_dog).owner == NULL)
	{
		free((*n_dog).name);
		free((*n_dog).owner);
		free(n_dog);
		return (NULL);
	}

	for (i = 0; i < n; i++)
		(*n_dog).name[i] = name[i];
	(*n_dog).name[i] = '\0';

	(*n_dog).age = age;

	for (i = 0; i < 0; i++)
		(*n_dog).owner[i] = owner[i];
	(*n_dog).owner[i] = '\0';

	return (n_dog);
}
