#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: dest string
 * @src: source string
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int i, l1, l2;

	l1 = strlen(dest);
	l2 = strlen(src);
	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (dest);
}
