#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	char c;
	char c = 'a';

	while (c <= 'z')
	{
		printf("Values %d char %c\n", c, c);
		c = c + 1;
	}
	return (0);

