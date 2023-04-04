#include <stdio.h>
#include "main.h"
/**
**_strchr - check the code
*@s: pointer
*@c: constant
*Return: 0
*
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			s++;
		}
		return (NULL);
	}
}

