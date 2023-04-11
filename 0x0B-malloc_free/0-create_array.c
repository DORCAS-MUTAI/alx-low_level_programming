#include <stdlib.h>
#include "main.h"
/**
*create_array - creates an array of chars
*@size: size of the array
*@c: char to assign
*Return: pointer to array
*
*
*
*/


char *create_array(unsigned int size, char c)
{
char *str;
unsigned int n;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
{
return (NULL);
}
for (n = 0; n < size; n++)
{
str[n] = c;
}
return (str);
}
