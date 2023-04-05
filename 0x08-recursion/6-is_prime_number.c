#include "main.h"
/**
 * _prime - check if number is prime
 * @n: number
 * return: integer
 */
int _prime(int i, int n)
{
	if ((n / i) < i)
		return (1);
	else if (n <= 1)
		return (0);
	else if (n % i == 0 && i > i)
		return (0);
	return (_prime(n, i + 1));
}
/**
 * is_prime_number - returns 1 if the input int is a prime number
 * @n: input number
 * Return: if the input is a prime number - 1
 * if no - 0
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
