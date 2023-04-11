#include "main.h"
#include <stdio.h>
/**
*main - main entry
*@argc: counts arguments in a program
*@argv: array that points to char
*Return: 0
*
*/

int main(int argc, char **argv)
{
int i;
int j;

if (argc < 1)
{
printf("Error\n");
return (1);
}

i = argv[1];
j = argv[2];
printf("%d\n", i * j);

return (0);
}
