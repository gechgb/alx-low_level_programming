#include "main.h"
/**
 * _strcmp - comparation
 * @s1: int 1
 * @s2: int 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;

	while (b == 0)
	{
		if ((*(s1 + a) == '\0') && (*(s2 + a) == '\0'))
			break;
		b = *(s1 + a) - *(s2 + a);
		a++;
	}

	return (b);
}
