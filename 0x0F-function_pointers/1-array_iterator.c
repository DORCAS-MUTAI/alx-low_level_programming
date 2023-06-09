#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*array_iterator - executes a function given as
*a parameter on each element of an array.
*@array: array
*@size: size of the array
*@action: pointer to the function you need to use
*Return: always 0 if successful
*
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
