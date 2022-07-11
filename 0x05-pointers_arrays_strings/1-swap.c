#include "main.h"
/**
* swap_int - swap two int
* @a: pointer one
* @b: pointer two
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
