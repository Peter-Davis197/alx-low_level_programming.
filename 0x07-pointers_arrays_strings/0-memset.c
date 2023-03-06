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
	unsigned int index = 0;
	unsigned char *memory = s; value = c;

	for (index < n; index++)
		memory[index] = value;
	
	return (memory);
}
