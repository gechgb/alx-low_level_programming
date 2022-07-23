#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print argv
 *@argc: first argument
 *@argv: arry
 *Return: (0)
**/
int main(int argc, char *argv[])
{
	int a, b, c = 0;

	for (a = 1; a < argc; a++)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}

		c += atoi(argv[a]);
	}
	printf("%d\n", c);
	return (0);
}
