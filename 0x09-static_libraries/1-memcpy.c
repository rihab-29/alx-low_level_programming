#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory area to point to
 * @src: memory area
 * @n: bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
