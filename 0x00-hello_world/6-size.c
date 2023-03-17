#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: using sizeof to print he size of various types.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned 1ong)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned 1ong)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned 1ong)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned 1ong)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned 1ong)sizeof(f));
	return (0);
}
