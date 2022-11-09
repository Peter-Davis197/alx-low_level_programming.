#include "main.h"

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int i;

	while (s[i] != '\0') /*count character of string*/
	{
		i++;
	}

	return (1);
}

/**
 * _strcpy - copy arrays
 * @src: arry of elements
 * @dest: dest arry
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - array for prints a strin
 * @str: array of elements
 * Return: pointer
 */

char *_strdup(char *str);
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
