#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: input number
 * return: void
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int num = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			num++;
		}
		else if (num)
		{
			_putchar('0');
		}
	}
	if (!num)
		_putchar('0');
}
