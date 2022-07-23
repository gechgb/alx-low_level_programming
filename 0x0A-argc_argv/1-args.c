#include <stdio.h>
/**
 * main - print argc
 *@argc: first argument
 *@argv: arry
 *Return: (0)
**/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
