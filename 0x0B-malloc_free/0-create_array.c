#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of char
 * @size: size of array of char to be created
 * @c: char to begin array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(*s) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	s[i] = c;
	return (s);
}
