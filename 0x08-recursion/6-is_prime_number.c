#include "main.h"

int _prime(int n, int i);
int is_prime_number(int n);

/**
 * _prime - check if number is prime
 * @n: number
 * @i: number of iteration
 * return: prime - 1 
 * composite - 0
 */
int _prime(int n, int i)
{
	if ((n / i) < i)
		return (1);
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > i)
		return (0);
	return (_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input int is a prime number
 * @n: input number
 * Return: integer
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
