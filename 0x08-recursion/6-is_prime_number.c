#include "main.h"
#include <stdio.h>

int checker(int n, int d);

/**
 * checker - checks if number is prime
 * @n: number
 * @d: divisor
 * Return: if devisible returns 0
 * if no returns 1
 */
int checker(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d == n / 2)
		return (1);
	return (checker(n, d - 1));
}

/**
 * is_prime_number - returns 1 if the input int is a prime number
 * @n: input number
 * Return: integer
 */
int is_prime_number(int n)
{
	return (checker(n, n - 1));
}
