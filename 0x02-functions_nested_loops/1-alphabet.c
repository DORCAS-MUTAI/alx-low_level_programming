#include "main.h"
/**
 * print_alphabet - prints all lowercase alphabets
 * Return: always 0
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
