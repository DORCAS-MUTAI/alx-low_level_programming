#include "main.h"
/**
 * _isupper - checks if the char is uppercase
 * Return: 1 if true otherwise 0
 * @c: char to be checked
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

