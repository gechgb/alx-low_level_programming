#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *@str: given pointer
 *Return: copy of str pointer
**/
char *_strdup(char *str)
{
	char *cp;
	unsigned int b;
	unsigned int c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b] != '\0'; b++)
		;
	cp = (char *)malloc(sizeof(char) * (b + 1));
	if (cp == NULL)
		return (NULL);
	for (c = 0; c <= b ; c++)
		cp[c] = str[c];
	return (cp);
}
