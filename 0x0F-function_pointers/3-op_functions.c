#include <stdlib.h>
#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
*op_add - sums num1 and num 2
*@a: num1
*@b: num2
*Return: sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_mul - multiplies two digits
*@: num 1
*@b: num2
*Return: multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_sub - subtracts two numbers
*@a: num 1
*@b: num2
*Return: difference if two numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_div - divides two numbers
*@a: num1
*@b: num2
*Return: division
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
*op_mod - find modulus of a number
*@a: num1
*@b: num2
*Return: remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
