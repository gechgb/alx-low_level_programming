 #include "main.h"
 #include <stdio.h>
/**
* main - check the code
* Return: Always 0
*
*/
int main(void)
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
