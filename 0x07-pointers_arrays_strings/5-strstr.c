#include "main.h"

/**
 *_strstr - Locates a substring
 *@haystack: The string to be searched
 *@needle: The substring to be located
 *Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

		while (*haystack)
		{
			i = 0;

			if (haystack[i] == needle[i])
			{
				do {
					if (needle[i + 1] == '\0')
						return (haystack);

						i++;

				} while (haystack[i] == needle[i]);
			}

			haystack++
		}

		return ('\0')
}
