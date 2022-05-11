#include "main.h"
/**
 * print_last_digit - function that prints last digit
 * @a: integer input
 * Return: return the last digit of integer
 */
int print_last_digit(int a)
{
	int b;

	b = a;
	if (b < 0)
		b *= -1;
	_putchar('0' + b % 10);
	return (b % 10);
}
