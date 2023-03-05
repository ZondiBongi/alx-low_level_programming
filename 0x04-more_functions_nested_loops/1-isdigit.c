#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the number to checked
 * Return: 1 for a characer that is a digit or 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
