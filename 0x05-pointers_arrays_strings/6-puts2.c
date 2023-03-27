#include "main.h"
/**
*puts2 - prints every word of the string
*@str: wordsto print
*
*
*/

void puts2(char *str)
{
	int string = 0;
	int a = 0;
	char *y = str;
	int b;

	while (*y != '\0')
	{
		y++;
		string++;
	}
	a = string - 1;
	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}



