#include "main.h"

/**
 * _pow_recursion - returns x raised to the power of y
 * @x: input
 * @y: input
 * Return: the value of x
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
