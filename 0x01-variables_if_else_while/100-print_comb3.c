#include <stdio.h>
/**
 * main -entry point
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 138; i++)
	{
		putchar(i);
		if (i == 138)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

