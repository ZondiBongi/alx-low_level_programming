#include "main.h"

/**
 * _strchr - returns the of a character in a string or null if not found
 * @c: character to be found
 * @s: string to be searched
 *
 * Return: Always 0 Succes
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
