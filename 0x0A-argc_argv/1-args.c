#include <stdio.h>

/*
 * main - print the number of arguments
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
