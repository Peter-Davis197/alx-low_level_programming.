#include "main.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: the string to be searched
 *@accept: the prefix to be measured.
 *Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int u = 0;
	int i;

	while (s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				u++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (u);
		}
		s++;
	}
	return (u);
}
