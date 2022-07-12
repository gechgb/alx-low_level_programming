#include "main.h"
/**
* puts2 - puts character
*
* @str: accepted character
* Return: Always 0
*/
void puts2(char *str)
{
	int a;

	a = 0;
	while (*(a + str))
	{
		_putchar(*(a + str));
		a = a + 2;
	}
		_putchar('\n');
}
