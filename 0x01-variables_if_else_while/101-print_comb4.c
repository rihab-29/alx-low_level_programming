#include <stdio.h>
/**
 * main - Entry point
 *
 * description: 'prints all possible different combinations of three digits'
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int m;
	int p;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = 1 ; m < 10 ; m++)
		{
			for (p = 2 ; p < 10 ; p++)
			{
				if (n < m && m < p)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(p + '0');
					if (n + m + p == 24)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
