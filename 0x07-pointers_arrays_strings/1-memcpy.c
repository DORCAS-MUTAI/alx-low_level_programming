#include "main.h"
/**
**_memcpy - copies a string
*@dest: num 1
*@src: num 2
*@n: condition
*Return: dest
*/

char *_memcpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != 0)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
