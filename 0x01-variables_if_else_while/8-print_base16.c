#include <stdio.h>
/**
 * main - main entry
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; j <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
