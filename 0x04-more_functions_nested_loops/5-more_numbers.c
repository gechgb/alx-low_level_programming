#include "main.h"

/**
* more_numbers  - multiplies two integers
*
* Return: return 0
*/
void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
	for (a = 0; a < 15; a++)
	{
		if (a > 9)
		{
			_putchar(48 + (a / 10));
		}
			_putchar(48 + (a % 10));
	}
		_putchar('\n');
	}
}

