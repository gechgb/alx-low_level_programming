 #include "main.h"
 #include <stdio.h>
/**
* print_alphabet -  prints the alphabet.
* Return: Always 0
*
*/
int print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
	if (i != 101 && i != 113)
	{
	_putchar(i);
	}
	}
	_putchar('\n');
	return (0);
}
