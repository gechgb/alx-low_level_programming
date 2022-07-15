#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input
 * Return: dest.
 */

char *leet(char *s)
{
	int c = 0;
	int g;
	int l[] = {97, 101, 111, 116, 108};
	int u[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (*(s + c) != '\0')
	{
		for (g = 0; g < 5; g++)
		{
			if (*(s + c) == l[g] || *(s + c) == u[g])
			{
				*(s + c) = n[g];
				break;
			}
		}
		c++;
	}

	return (s);
}
