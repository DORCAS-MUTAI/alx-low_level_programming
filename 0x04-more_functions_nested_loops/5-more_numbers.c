#include "main.h"
/**
 * more_numbers - prints numbers 10 times
 * Return: always 0
 *
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			_putchar(i);
		}
	}
	_putchar("\n");
}
