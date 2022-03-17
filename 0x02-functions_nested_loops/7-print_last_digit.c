#include "main.h"
/**
 * print_last_digit - function that prints last digit
 * @a: integer input
 * Return: return the last digit of integer
 */
int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
	b = (a * -1) % 10;
	_putchar(b + '0');
	return (b);
	}
	else
	{
		b = a % 10;
		_putchar(b + '0');
		return (b);
	}
}
