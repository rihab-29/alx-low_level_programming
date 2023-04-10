#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: input string
 * Return: the int converted
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int n = 0;
	int b = 1;
	int c = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			b *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			c = 1;
			n = (n * 10) + (s[a] - '0');
			a++;
		}
		if (c == 1)
		{
			break;
		}
		a++;
	}
	n *= b;
	return (n);
}
