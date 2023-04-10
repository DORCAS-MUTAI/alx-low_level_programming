#include "main.h"
/**
*_strspn - finds lenght of the prefix
*@s: the string to be searched
*Return: bytes s has
*@accept: preficx to be checked
*
*/


unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}

