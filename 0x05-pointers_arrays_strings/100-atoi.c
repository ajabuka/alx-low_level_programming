#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: pointer to the string
 * Return: integer if available, 0 if non available
 */

int _atoi(char *s)
{
	unsigned int n = 0, size = 0, posi = 0, negi = 1, z = 1, i;

	while (*(s + n) != '\0')
	{
		if (size > 0 && (*(s + n) < '0' || *(s + n) > '9'))
			break;

		if (*(s + n) == '-')
			negi *= -1;

		if ((*(s + n) >= '0') && (*(s + n) <= '9'))
		{
			if (size > 0)
				z *= 10;
			size++;
		}
		n++;
	}

	for (i = n - size; i < n; i++)
	{
		posi = posi + ((*(s + i) - '0') * z);
		z /= 10;
	}
	return (posi * negi);
}
