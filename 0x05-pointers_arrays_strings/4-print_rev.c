#include "main.h"
/**
* print_rev - puts character
*
* @s: accepted character
*/
void print_rev(char *s)
{
	int a;

	a = 0;
	while (*(a + s))
	{
		a++;
	}
	a = a - 1;
	while (a >= 0)
	{
		_putchar(*(a + s));
		a--;
	}
		_putchar('\n');
}
