#include "main.h"
#include <stdio.h>

int checker(int n, int i);

/**
 * checker - checks if number is prime
 * @n: number
 * @i: number of iterations
 * Return: if n is prime returns 0
 * if no returns 1
 */
int checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (checker(n, i - 1));
}

/**
 * is_prime_number - returns 1 if the input int is a prime number
 * @n: input number
 * Return: if n is prime returns 1
 * if not returns 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checker(n, n - 1));
}
