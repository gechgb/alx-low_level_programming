#include "main.h"
#include <stdio.h>
/**
*_abs - computes the absolute value of an integer
*lowercase and upercase character. Another cases, shows
*@n: character
*
*Return: Always 1
*/
int _abs(int n)
{
	int j;

	if (n < 0)
	{
		j = n * -1;
	}
	else if (n == 0)
	{
		j = 0;
	}
	else
	{
		j = n;
	}

	return (j);

}
