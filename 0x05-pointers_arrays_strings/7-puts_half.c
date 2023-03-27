#include"main.h"
/*
*puts_half - prints half of a string followed by a new line
*@str: input
*Return: always 0
*
*
*/

void puts_half(char *str)
{
	int a, n, string;

	string = 0;

	for (a = 0; str[a] != 0; a++)
	{
		string++;
	}
	n = (string / 2);
	if ((string % 2) == 1)
		n = ((string + 1) / 2);
	for (a = n; str[a] != 0; a++)
		_putchar(str[a]);
	_putchar('\n');
}
