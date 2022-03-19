#include "main.h"
/**
 * print_numbers - function that prints 0-9
 * @void: no input arguments
 */
void print_numbers(void)
{
	int c;

	c = 48;
	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
