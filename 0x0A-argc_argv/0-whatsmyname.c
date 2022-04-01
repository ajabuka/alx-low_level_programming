#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: number of command line arguments
 * @argv: array of the program command line arguments
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
