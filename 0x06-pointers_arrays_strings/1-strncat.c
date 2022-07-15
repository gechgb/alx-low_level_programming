#include "main.h"
/**
 *  *_strncat - copy file frome sorce to destination.
 * @dest: destination
 * @src: sorce
 * @n: characters to copy
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (*(dest + a))
	{
		a++;
	}

	b = 0;

	while (*(src + b) && b < n)
	{
		(*((dest + a) + b)) = (*(src + b));
		b++;
	}

	*(dest + a + b) = '\0';

	return (dest);
}
