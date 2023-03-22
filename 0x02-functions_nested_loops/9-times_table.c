#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int n, m, l;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			l = m + n;
			if (m == 0)
			{
				_putchar(l + '0');
			}
			if (l < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			} else if (l >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
