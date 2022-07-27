#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars, and
 *initializes it with a specific char.
 *@size: size of given size
 *@c: given char
 *Return: array
**/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (b = 0; b < size ; b++)
	{
		a[b] = c;
	}
	return (a);
}
