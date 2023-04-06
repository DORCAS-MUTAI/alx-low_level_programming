#include "main.h"
/**
*sqrtFunction - helper function
*@i: number1
*@num: number2
*Return: square root
*/
int sqrtFunction(int i, int num)
{
	if ((i * i) == num)
	{
		return (i);
	}
	else
	{
		if ((i * i) > num)
		{
			return (-1);
		}
		else
		{
			return (sqrtFunction(num, i + 1));
		}
	}
}

/**
*_sqrt_recursion - finds a natural sruare root
*@n: number
*Return: square root
*
*
*
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrtFunction(n, 0));
}
