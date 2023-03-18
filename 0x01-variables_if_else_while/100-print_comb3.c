#include <stdio.h>
/**
 * main - Entry point
 *
 * description: 'prints all possible different combinations of two digits'
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = 1 ; m < 10 ; m++)
		{
			if (n < m && n != m)
			{
				putchar(n + '0');
				putchar(m + '0');
				if ( n+m == 17)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
