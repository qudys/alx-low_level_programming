#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all parameters
 * @n: constant number of parameters
 * @...: variable number of parameters passed
 * Return: sum of all parameters passed
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
