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
	unsigned long int xor_value = n ∧ m;

	while (xor_value)
	{
		if (xor_value & 1UL)
			count++;
		xor_value = xor_value >> 1;
	}
	return (count);
}
