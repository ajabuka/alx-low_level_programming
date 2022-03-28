#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: Pointer to a pointer of a string (Sources address
 * @to: Pointer with the target address
 * Return: No return.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
