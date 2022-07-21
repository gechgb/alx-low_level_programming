//#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}


int _sqrt_recursion(int n)
{
	if ((n / n) != n * n )
	{
		return -1;
	}
//	else if ((n % n) == 0)
//	{
//		return n/n;
	
//	else if ((n / n) == n)
	else if ((n / n) == n);
	{
	 return (n * _sqrt_recursion(n, n % n);
	}
	
		
}
