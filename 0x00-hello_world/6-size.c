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
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("size of an int: %u byte(s)\n", sizeof(int));
	printf("size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
