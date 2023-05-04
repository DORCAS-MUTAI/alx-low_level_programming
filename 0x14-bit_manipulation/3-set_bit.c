#include "main.h"
/**
*set_bit - set the value of bit
*@n: unsigned integer
*@index: index value of a number
*Return: 1 if true
*
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}

