#include "main.h"
/**
*print_rev - print reverse characters
*@s: string
*Return: always 0
*/

void print_rev(char *s)
{
	int string = 0;
	int a;

	while (*s != 0)
	{
		string++;
		s++;
	}
	s--;
	for (a = string; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
