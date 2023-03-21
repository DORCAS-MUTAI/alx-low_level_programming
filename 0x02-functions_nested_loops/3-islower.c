#include "main.h"
/**
 * _islower - prints lowercase characters returns 1 if yes and 0 if no
 * Return: 1 if lowercase otherwise 0
 *
 */

int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
