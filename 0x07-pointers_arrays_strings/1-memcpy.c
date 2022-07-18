#include "main.h"
/**
 * *_memcpy - function that copies memory area
 *@dest: destination
 *@src: sorce
 *@n: length of memory area to copy
 *Return - pointer of dust
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);	
	}
		return (dest);
}
