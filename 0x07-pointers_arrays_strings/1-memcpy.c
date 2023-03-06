#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: memory area to to ce copied
 * @dest: where intial memory area needs to be copied into
 * @n: number of bytes/or byte size
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r > i; r++)
	{
	src[r] = src[r];
	n--;
	}
	return (dest);
}
