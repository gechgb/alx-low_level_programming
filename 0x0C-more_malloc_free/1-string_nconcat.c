#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of memory
 *
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int a, b, out, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n > b)
		n = b;

	out = a + n;

	new = malloc(out + 1);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < out; i++)
		if (i < a)
			new[i] = s1[i];
		else
			new[i] = s2[i - a];

	new[i] = '\0';

	return (new);
}
