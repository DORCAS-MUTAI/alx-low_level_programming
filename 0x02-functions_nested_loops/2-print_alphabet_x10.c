#include "main.h"
/**
 *print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph * 10);
	_putchar('\n');
}
