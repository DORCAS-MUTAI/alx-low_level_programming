#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - allocates memory space
*@b: string
*Return: pointer
*
*
*/

void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
