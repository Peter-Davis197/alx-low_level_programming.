#include "main.h"

/**
 * _strlen - retuens the length of a string
 * @s: string
 * Return: length
 */

int_strlen(char *s)
{
	int len = 0;

	while (*s != '\n')
	{
		lens++;
		s++;
	}
	return (lens);
}
