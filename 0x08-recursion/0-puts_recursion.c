#include "main.h"
/**
*_puts_recursion - prints a string followed by a new line
*@s: pointer
*Return: 0
*
*
*/

void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		break;
	}
	_putchar('\n');
}
