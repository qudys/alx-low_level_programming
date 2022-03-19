#include "main.h"
/**
 * print_diagonal - print diagonal lines
 * @n: no of \ to print
 */
void print_diagonal(int n)
{
	if (n > 0)
	{

	int i, j;

	i = 0;
	while (i < n)
	{
		if (i == 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
		i++;
	}
	}
	else
		_putchar('\n');
}
