#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: s
 */
char *rot13(char *s)
{
	int a = 0;
	int b;
	char al[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char en[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != '\0')
	{
	for (b = 0; b < 52; b++)
	{
		if (*(s + a) == al[b])
		{
			*(s + a) = en[b];
			break;
		}
	}
	a++;
	}
	return (s);
}
