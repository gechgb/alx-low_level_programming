#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cat;

	cat = 97;
	while (cat<123)
	{
		putchar(cat);
		cat++;
	}
	putchar('\n');
	return (0);
}
