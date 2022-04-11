#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct doh
 * @d: struct dog
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name != NULL)
			prinf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");

		printf("Age: %.6f\n", (*d).age);

		if ((*d).owner != NULL)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)\n");
	}
}
