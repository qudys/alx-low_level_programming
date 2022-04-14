#include "main.h"
/**
 * _abs - computes absolute value of the int
 * @a: int passed
 * Return: absolute integer
 */
int _abs(int a)
{
	if (a < 0)
		return (a / -1);
	else
		return (a);
}
