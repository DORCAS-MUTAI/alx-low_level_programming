#include <stdio.h>
/**
*main - main entry
*@argc: number of arguments in a program
*@argv: array pointer to char
*Return: always 0
*
*/

int main(int argc, char **argv)
{
(void)argc;

printf("%d\n", argc - 1);
return (0);
}