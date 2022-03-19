#include "main.h"
/**
 * _isupper - function that checks for lowercase
 * @c: char input
 * Return: 1 if lowercase else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
