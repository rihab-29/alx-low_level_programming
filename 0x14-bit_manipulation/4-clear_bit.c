#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: the index, starting from 0 of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = ~(1UL << index);

	if (index >= 63)
		return (-1);

	*n = (*n & m);
	return (1);
}
