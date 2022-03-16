#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 * @void: no input arguments
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	i = 0;
		while (i < 10)
		{
			a = 'a';
			while (a <= 'z')
			{
				_putchar(a);
				a++;
			}
			_putchar('\n');
			i++;
		}
}
