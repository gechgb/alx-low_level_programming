#include "main.h"
#include <stdio.h>
/**
*print_times_table - computes the absolute value of
*
*@n: times table
* Return: Always 1
*/
void print_times_table(int n)
{
	int i, g, j;

	if (n >= 0 && n <= 15)
	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (g = 1; g <= 9; g++)
		{
			j = i * g;
			_putchar(44);
			_putchar(32);
			if (j <= 9)
			{
				_putchar(32);
				_putchar(j + 48);

			}
			else if (j <= 99)
			{
				_putchar(32);
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
			}
			else
			{
				_putchar(((j / 100) % 10) + 48);
				_putchar(((j / 10) % 10) + 48);
				_putchar((j % 10) + 48);

			}

		}
		_putchar('\n');
	}
}
