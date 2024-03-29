#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of memory
 * Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || sbze == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * sbze);

	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < (nmemb * sbze); b++)
	{
		a[b] = 0;
	}
	return (a);
}
