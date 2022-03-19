#include "main.h"
/**
 * print_line - function that prints line
 * @n: no of lines to print
 */
void print_line(int n)
{
	if (n > 0)
	{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
