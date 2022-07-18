#include "main.h"
/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 * @s: characters to mach
 * @accept: accepted characters
 * Return: returns frist mach
**/
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;

	for (a = 0; (*(s + a)) != '\0'; a++)
	{
		for (b = 0; (*(accept + b)) != '\0'; b++)
		{
			if (*(accept + b) == *(s + a))
			{
				return (s + a);
			}
		}
	}
	return ('\0');
}
