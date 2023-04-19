#include <stdlib.h>
#include "function_pointers.h"
/**
*print_name - function that prints the name
*@name:  name to be printed
*@f: pointer
*Return: always 0 ( success)
*
*
*
*/


void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
