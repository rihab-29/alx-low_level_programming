#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * @...: the integers
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list ap;

	if (!n)
	{
		return (0);
	}
	va_start(ap, n);
	do {
		sum += va_arg(ap, int);
	} while (i--);
	va_end(ap);
	return (sum);
}
