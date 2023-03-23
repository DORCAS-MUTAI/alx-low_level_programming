#include "main.h"
/**
 * _isdigit - check number
 * Return: 1 otherwise 0
 * @c: number
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
