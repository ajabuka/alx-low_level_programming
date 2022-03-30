#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: Standard input string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * check_if_palindrome - checks each character if a string is palindrome
 * @s: Standard input string
 * @l: iterates left to right
 * @r: iterates right to left
 * Return: 1 if palindrome else 0
 */

int check_if_palindrome(char *s, int l, int r)
{
	if (*(s + l) == *(s + r))
	{
		if (l >= r)
			return (1);
		return (0 + check_if_palindrome(s, l + 1, r - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks is a string is palindrome
 * @s: Standard input string
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;

	if (*s == '\0')
		return (1);
	return (check_if_palindrome(s, 0, i));
}
