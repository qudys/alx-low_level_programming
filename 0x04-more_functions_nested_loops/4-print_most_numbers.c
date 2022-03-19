#include "main.h"
/**
 * print_most_numbers - function that prints 0-9 except 2 and 4
 * @void: no input argument
 */
void print_most_numbers(void)
{
	int c = 48;

	for (c = 48; c < 58; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}
