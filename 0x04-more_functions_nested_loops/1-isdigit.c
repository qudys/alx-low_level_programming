#include "main.h"
/**
 * _isdigit - function to check if int is a digit
 * @c: integer input
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
