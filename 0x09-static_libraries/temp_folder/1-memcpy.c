#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: dest string
 * @src: source string
 * @n: no of bytes to copy from src
 * Return: dest string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
