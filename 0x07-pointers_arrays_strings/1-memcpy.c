#include "main.h"
/**
**_memcpy - copies a string
*@dest: num 1
*@src: num 2
*@n: condition
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (a = 0; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
