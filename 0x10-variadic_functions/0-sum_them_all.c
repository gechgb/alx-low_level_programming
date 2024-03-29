#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: amount of the arguments
 *
 * Return: sum of n
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int j = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		j += va_arg(valist, int);

	va_end(valist);

	return (j);
}
