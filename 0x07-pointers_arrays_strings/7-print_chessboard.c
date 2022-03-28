#include "main.h"

/**
 * print_chessboard - prints the position of pieces on a chess board
 * @a: Pointer to Standard input string
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, n;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			n = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n');
}
