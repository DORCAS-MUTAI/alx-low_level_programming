#include <stdlib.h>
#include "main.h"
/**
*string_nconcat - concatenates 2 strings
*@s1: string one
*@s2: string two
*@n: lwngth of string to concatenate
*Return: str
*
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	while (s1[i])
	{
		i++;
	}
	while (s2[k])
	{
		k++;
	}
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);
	k = 0;

	while (j < l)
	{
		if (j <= i)
		{
			str[j] = s1[j];
		}
		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
