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
	int i, j, k, l, m;

	i = strlen(src);
	k = strlen(dest);
	if (n > i + 1)
	{
		for (j = 0; j <= i; j++)
			dest[j] = src[j];
		for (l = j; l <= k; l++)
			dest[l] = '\0';
	}
	else
	{
		for (m = 0; m < n; m++)
			dest[m] = src[m];
	}
	return (dest);
}
