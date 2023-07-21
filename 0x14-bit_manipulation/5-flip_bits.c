#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * to get from number to another
 * @n: first number
 * @m: second number
 * Return: number of bits tp flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		if (xor & 1UL)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
