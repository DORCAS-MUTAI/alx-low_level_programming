#include "main.h"
/**
*is_prime_number - check if the number is prime
*@n: input
*Return: 1 if prime otherwise 0
*
*
*
*/

int is_prime_number(int n)
{
	num = 2;

	while (num < n)
	{
		if (n % num == 0)
			return (0);
		num++;
	}
	return (1);
}
