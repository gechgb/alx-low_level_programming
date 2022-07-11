#include "main.h"
/**
* _puts - puts character
*
* @str: accepted character
* Return: Always a
*/
void _puts(char *str)
{
	int a;

	a = 0;
	while (*(a + str))
	{
		_putchar(*(a + str));
		a++;
	}
		_putchar('\n');
}
