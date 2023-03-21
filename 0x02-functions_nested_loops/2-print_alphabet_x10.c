#include "main.h"
/**
 *print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	char alph;
	int count = 0;

	while (count++ < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
