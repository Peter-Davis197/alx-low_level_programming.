#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte to fill
 * @n: bytes of memory area to fill
 *
 * Return: the memory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i < n; i++)
	{
		s[i] = b;
		}
	return (s);
}
