#include "main.h"
/**
 * print_last_digit - rints the last number
 * Return: last digit
 * @n: the number
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;
	_putchar(x + "0");
	return (0);
}

