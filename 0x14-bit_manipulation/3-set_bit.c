#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: the index, starting from 0
 * @n: number of bit to get
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return (!!(*n |= 1L << index));
}
