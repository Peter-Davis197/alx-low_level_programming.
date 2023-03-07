#include "main.h"

/**
 *_strctr - locates a character in string
 *@s: the string to be searched.
 *@c: the character to be located.
 *
 *Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
