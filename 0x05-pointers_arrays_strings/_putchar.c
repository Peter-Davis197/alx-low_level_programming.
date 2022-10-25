#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: char to beprinted
 * Return: on success 1
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
