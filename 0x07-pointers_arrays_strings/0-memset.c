#include "main.h"
/**
**_memset - fills memory with constant byte
*@s: address of memory to print
*@b: the constant byte
*@n: size of memory to print
*Return: s
*
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r = 0;

	for (r = 0; r < n; r++)
		s[r] = b;
	return (s);
}
