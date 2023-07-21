#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: the index, starting from 0
 * @n: number of bit to get
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
