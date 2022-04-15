#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
