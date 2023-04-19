#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: int array
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
