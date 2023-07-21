#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: the index
 * @n: number of bit to get
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return (n >> index & 1);
}
