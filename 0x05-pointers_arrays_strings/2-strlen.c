#include "main.h"
/**
* _strlen - count character
*
* @s: accepted character
* Return: Always a
*/
int _strlen(char *s)
{
	int a;

	a = 0;
	while (*(a + s))
	{
		a++;
	}
		return (a);
}
