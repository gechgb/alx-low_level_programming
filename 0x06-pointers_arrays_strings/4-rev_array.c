#include "main.h"
/**
 * reverse_array - reverses 
 * @a: array.
 * @n: number of elements 
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int f;
	int b;
	int c;

	for (f = 0; f < n - 1; f++)
	{
		for (b = f + 1; b > 0; b--)
		{
			c = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = c;
		}
	}
}
