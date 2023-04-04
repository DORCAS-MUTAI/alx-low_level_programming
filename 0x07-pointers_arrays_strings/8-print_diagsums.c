#include <stdio.h>
#include"main.h"
/**
*print_diagsums - entry point
*@a: input
*@size: input
*Return: always 0
*
*
*/

void print_diagsums(int *a, int size)
{
	int sum, sum0, i;

	sum = 0;
	sum0 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum0 += a[i * size + (size - i - 10)];
	}
	printf("%d, %d\n", sum, sum0);
}

