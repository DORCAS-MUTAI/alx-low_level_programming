#include "main.h"
/**
* swap_int - to swap two integers
* return: always 0
*@a: num1
*@b: num2
*
*/

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
