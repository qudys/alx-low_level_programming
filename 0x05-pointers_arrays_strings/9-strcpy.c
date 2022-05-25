#include "main.h"
#include <string.h>
/**
 * _strcpy - function that copies a string from source to destination
 * Return: dest string
 * @dest: dest string
 * @src: source string
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = strlen(src);
	for (j = 0; j <= i; j++)
		dest[j] = src[j];
	return (dest);
}
