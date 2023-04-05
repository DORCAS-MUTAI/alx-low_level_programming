#include "main.h"
/**
*_pow_recursion - power x
*@x: num1
*@y: num2
*Return: power of x raised to power of y
*
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
