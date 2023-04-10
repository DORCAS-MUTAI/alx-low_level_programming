#include "main.h"
/**
* *_strcpy - copies the string..
*@dest: copy to
*@src: source
*Return: always 0
*
*/

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}


