#include "main.h"
/**
 * _find_sqrt - Finds the natural square root of number
 * @i: number
 * @r: root
 * Return: the square root
 * if the number does not have a square root - -1
 */
int _find_sqrt(int i, int r)
{
	if (r == i / 2)
		return (-1);
	if ((r * r) == i)
		return (r);
	return (_find_sqrt(i, r + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: input number
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (_find_sqrt(n, r));
}
