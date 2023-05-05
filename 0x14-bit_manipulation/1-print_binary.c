#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: input number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 63;
	int binary = 0;
	unsigned long int a;

	while (i >= 0)
	{
		a = n >> i;

		if (a & 1)
		{
			_putchar('1');
			binary++;
		}
		else if (binary)
		{
			_putchar('0');
		}
		i--;
	}
	if (!binary)
	{
		_putchar('0);
	}
}
