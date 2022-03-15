#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	i = 0;
	while (i < 8)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
