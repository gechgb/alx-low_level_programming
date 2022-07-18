#include "main.h"
/**
* _strspn - a function that gets the length of a prefix substring
* @s: which consist only of bytes from accept
* @accept: value to be accepted
* Return:  length of a prefix substring
**/
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int c = 0;

	for (a = 0;  (*(s + a)) != '\0'; a++)
	{
		c = 1;
		for (b = 0; (*(accept + b)) != '\0'; b++)
		{
			if (*(accept + b) == *(s + a))
			{
				c = 2;
				break;
			}
		}
		if (c == 1)
		{
			break;
		}
	}
	return (a);
}
