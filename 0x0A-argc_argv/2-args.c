#include <stdio.h>
/**
*main- entry point
*@argc: counts arguments passed
*@argv: Array of pointer to char
*Return: always 0 if true else 1
*/

int main(int argc, char **argv)
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
