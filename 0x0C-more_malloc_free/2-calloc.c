#include "main.h"
#include <stdlib.h>
/**
*_calloc - allocates memory for an array using malloc
*@nmemb:number
*@size:size
*Return:pointer
*
*
*
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	str = malloc(j);

	if (str == NULL)
		return (NULL);
	while (i < j)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
