#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers
 * @a: array
 * @n: number of elements of the array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int k, m, t;

	for (k = 0; k < n - 1; k++)
	{
		for (m = k + 1; m > 0; m--)
		{
			t = *(a + m);
			*(a + m) = *(a + (m - 1));
			*(a + (m - 1)) = t;
		}
	}
}
