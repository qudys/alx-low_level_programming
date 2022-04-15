#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function passed on each element of an array
 * @array: array in question
 * @size: size of the array
 * @action: pointer to function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
