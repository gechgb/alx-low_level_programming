#include "main.c"
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: pointer
**/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
