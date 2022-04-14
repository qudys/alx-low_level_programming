#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with constant byte
 * @s: string to be filled
 * @b: byte to fill with
 * @n: number of bytes to fill with
 * Return: pointer to string s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
