#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: memory area to to be copied initially stored
 * @dest: where intial memory area needs to be copied into
 * @n: number of bytes/or byte size
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
