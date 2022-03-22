#include "main.h"
/**
 * print_rev - print the reverse of the string
 * @s: the input string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
