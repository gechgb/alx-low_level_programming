#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int a, c, d;

	if (n < 0)
	{
		a = n * -1;
		_putchar(45);
	}
	else
	{
		a = n;
	}

	c = a;
	d = 1;

	while (c > 9)
	{
		c /= 10;
		d *= 10;
	}

	for (; d >= 1; d /= 10)
	{
		_putchar(((a / d) % 10) + 48);
	}
}
