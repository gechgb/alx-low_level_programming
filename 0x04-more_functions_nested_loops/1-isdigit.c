#include "main.h"

/**
* _isupper - prints 1 if it is uppercase else 0
* @c: character to chake
*
* Return: return 1
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

