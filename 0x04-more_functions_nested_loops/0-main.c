#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	
	c = 'B';
	printf("%c: %d\n", c, _isupper(c));
	c = 'z';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
