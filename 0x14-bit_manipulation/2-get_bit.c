#include "main.h"
/**
*get_bit - finds the bit value of a number
*@n: unsigned integer
*@index: index of a number
*Return: index value of bit number
*
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}

