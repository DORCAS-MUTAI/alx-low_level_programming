#include "main.h"
/**
 * _islower - prints lowercase characters returns 1 if yes and 0 if no
 * @c: is the character to be checked
 * Return: 1 if lowercase otherwise 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
