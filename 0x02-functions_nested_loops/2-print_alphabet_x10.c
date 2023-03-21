#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabets.
 *
 * return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int n;
	int m;

	for (m = 1; m <= 10; m++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
