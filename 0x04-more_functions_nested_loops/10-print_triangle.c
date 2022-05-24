#include "main.h"
/**
 * print_triangle - function that prints triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < size - j; k++)
			_putchar('#');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
