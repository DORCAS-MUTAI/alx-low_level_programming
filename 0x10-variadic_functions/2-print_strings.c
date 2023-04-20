#include "variadic_functions.h"
#include <stdarg.h>
/**
*print_strings - prints strings followed by new line
*@n: number of strings
*@separator: string to be printed
*
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;
	char *str;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(my_list, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(my_list);
}

