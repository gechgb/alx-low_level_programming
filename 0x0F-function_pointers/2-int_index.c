#include "function_pointers.h"

/**
 * int_index - searches integer
 * @array: input array
 * @size: size of array
 * @cmp: pointer to the function to be used
 * to compare values.
 *
 * Return: index of the first eement
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
