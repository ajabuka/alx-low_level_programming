#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the initial segment
 * @accept: accepted bytes
 * i = used to iterate through s
 * j = used to loop through accept
 * bool = boolean operator: True = 1 and False = 0
 * Return: number of the accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
