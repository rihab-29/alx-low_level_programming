#include <stdio.h>
/**
 * main - Entry point
 *
 * description: 'prints all single digit numbers starting from 0'
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
