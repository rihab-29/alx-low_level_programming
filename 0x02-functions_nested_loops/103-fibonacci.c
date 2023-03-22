#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: nothing
 */
int main(void)
{
	int i = 0;
	int j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
		sum += k;
		j = k - j;
		++i;
	}
	printf("%d\n", sum);
	return (0);
}
