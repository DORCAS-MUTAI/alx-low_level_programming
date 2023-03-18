#include <stdio.h>
/**
 * main - main entry point
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 1; j < 100; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (j + i != 18)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
