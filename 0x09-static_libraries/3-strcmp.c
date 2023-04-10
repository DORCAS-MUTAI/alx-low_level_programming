#include "main.h"
/**
*_strcmp - compares num 1 to num 2
*@s1: num 1
*@s2: num 2
*Return: 0
*
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[1] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
