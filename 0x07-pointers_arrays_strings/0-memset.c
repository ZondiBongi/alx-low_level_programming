#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: the pointer to filled
 * @n: size of memory to fill
 * @b: byte size
 * Return: pointer to the memeory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
