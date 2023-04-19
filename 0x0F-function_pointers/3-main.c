#include "3-calc.h"
#include <stdio.h>
/**
*main - prints the results
*@argc: arguments supplied in a program
*@argv: array of pointers in the argument
*Return: always 0 if true
*/

int main(int __attribute__((__unused__)) argc, *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*op == '/' && num2 == 0) ||
		(*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2);
	return (0);
}
