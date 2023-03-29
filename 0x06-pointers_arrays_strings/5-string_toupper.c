#include "main.h"
/**
**string_toupper - changes all lowercase charcters of a string to uppercase
*Return: always 0
*@n: pointer
*
*
*
*/

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}


