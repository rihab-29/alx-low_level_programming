#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints all the numbers of base 16 in lowercase'
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 48;
	int m = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (m <= 102)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
