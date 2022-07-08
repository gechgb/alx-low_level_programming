#include "main.h"

/**
* _isdigit - prints 1 if it is digit else 0
* @c: digit to chake
*
* Return: return 1
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

