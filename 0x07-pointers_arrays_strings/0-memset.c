#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: int addrase
 * @b:  constant byte to right
 * @n: length of the pointer
 * Return: pointer
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
		return (s);
}
