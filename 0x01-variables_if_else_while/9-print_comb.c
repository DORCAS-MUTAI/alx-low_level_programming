#include <stdio.h>
/**
 * main - main entry
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
