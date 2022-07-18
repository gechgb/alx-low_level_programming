#include "main.h"
/**
 * *_strchr - a function that locates a character in a string.
 * @s: the first pointer
 * @c: a pointer to the first occurrence of the character
 * Return: pointer of c or null
 **/
char *_strchr(char *s, char c)
{
	int a = 0;
	int b;

	for (a = 0;  (*(s + a)) != '\0'; a++)
	{
		b = (*(s + a));
		if (b == c)
		{
			return (s + a);
		}
	}
		return ('\0');
}
