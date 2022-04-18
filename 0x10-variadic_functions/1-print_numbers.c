#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers passed followed by a new line
 * @separator: the string that separates the printed numbers
 * @n: the number of input integers
 * @...: variable number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	if (separator != NULL)
	{
	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf("%s", separator);
		printf("%d", va_arg(list, int));
	}
	printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(list, int));
	printf("\n");
	}

	va_end(list);
}
