#include "main.h"
/**
*_strlen - count characters
*Return: always 0
*@s: string to check
*/

int _strlen(char *s)
{
	int string = 0;

	while (*s != 0)
	{
		string++;
		s++;
	}
	return (string);
}
