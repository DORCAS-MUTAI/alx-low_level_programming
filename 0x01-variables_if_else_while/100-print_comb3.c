#include <stdio.h>
/**
 * main -entry point
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 00; i <= 90; i++)
	{
		putchar(i + 48);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

