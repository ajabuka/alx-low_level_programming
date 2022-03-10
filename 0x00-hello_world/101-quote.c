#include <unistd.h>
ssize_t pwrite(int fildes, const void *buf, size_t nbyte, off_t offset);
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60,);
	return (1);
}
