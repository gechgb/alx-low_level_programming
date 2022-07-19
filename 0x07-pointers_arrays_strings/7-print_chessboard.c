#include "main.h"
#include <stdio.h>
/**
 * print_chessboard  - a function that prints the chessboard.
 * @a: first pointer
 * Return: returns 0
**/
void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (b = 0; b <= 7; b++)
	{
		for (c = 0; c <= 7; c++)
		{
		_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
