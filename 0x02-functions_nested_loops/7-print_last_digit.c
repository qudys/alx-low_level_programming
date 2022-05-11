#include "main.h"
/**
 * print_last_digit - function that prints last digit
 * @a: integer input
 * Return: return the last digit of integer
 */
int print_last_digit(int a)
{
	int lastdigit = a % 10;

	if (a < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
