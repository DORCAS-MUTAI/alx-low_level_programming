#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - maint entry
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last diigit of %d is %d and is less than 6 and is not 0\n", n, n % 10);
	}
	else
	{
		print("Last digit of %d is %d and is zero\n", n, n % 10);
	}

	return (0);
}