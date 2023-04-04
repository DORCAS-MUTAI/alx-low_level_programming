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
	unsigned int bytes = 0;
	int index;
	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
 				return (bytes);
		}
		s++;
	}
}

