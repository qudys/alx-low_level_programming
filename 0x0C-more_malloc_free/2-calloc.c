#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an arra
 * @nmemb: number of elements
 * @size: size of each elements in bytes
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	p = malloc(nmemb * size);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;
	return (p);
}
