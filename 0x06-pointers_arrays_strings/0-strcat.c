#include "main.h"

/**
 *  *_strcat- copy from sorce to destination
 * @dest: destination
 * @src: sorce
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (*(dest + a))
	{
		a++;
	}

	b = 0;

	while (*(src + b))
	{
		(*((dest + a) + b)) = (*(src + b));
		b++;
	}

	*(dest + a + b) = '\0';

	return (dest);
}
