#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints half of a string.
 * @str: string input
 */
void puts_half(char *str)
{
	int i, j;

	i = strlen(str);
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = i / 2 + 1; j < i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
