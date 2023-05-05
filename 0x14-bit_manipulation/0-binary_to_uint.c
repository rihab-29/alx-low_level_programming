#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number
 * 0 if b is NULL, or one chars is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	i = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		i = 2 * i + (*b++ - '0');
	}
	return (i);
}
