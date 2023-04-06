#include "main.h"
#include <stdio.h>

int prime_checker(int n, int i);

/**
 * prime_checker - checks if number is prime
 * @n: number
 * @i: number of iteration
 * return: if prime - 1 
 * composite - 0
 */
int prime_checker(int n, int i)
{
	if ((n / i) < i)
		return (1);
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	return (prime_checker(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input int is a prime number
 * @n: input number
 * Return: integer
 */
int is_prime_number(int n)
{
	return (prime_checker(n, 1));
}
