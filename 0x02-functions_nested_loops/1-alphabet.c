#include "main.h"
/**
 * print_alphabet - prints a-z
 * @void: no input argument
 */
void print_alphabet(void)
{
	char a, z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
