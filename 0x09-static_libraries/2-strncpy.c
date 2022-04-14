#include "main.h"
#include <string.h>
/**
 * _strncpy - copies n bytes of source string to dest
 * @dest: dest string
 * @src: source string
 * @n: n bytes of src string
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, l1;

	l1 = strlen(src);
	if (n > l1)
	{
		for (i = 0; i < l1; i++)
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';
		return (dest);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
		return (dest);
	}
}
