#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: amount of memory
 *
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
