#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63;
	int filp = 0;
	unsigned long int b;
	unsigned long int a = n ^ m;

	while (i >= 0)
	{
		b = a >> 1;
		if (b & 1)
		{
			flip++;
		}
		i--;
	}
	return (flip);
}
