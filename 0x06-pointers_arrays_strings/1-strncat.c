#include "main.h"
#include "string.h"
/**
 * _strncat - concatenates n bytes of src with dest
 * @dest: dest string
 * @src: source string
 * Return: concatenated dest string
 */
char *_strncat(char *dest, char *src, int n)
{

	int i, l1, l2;

	l1 = strlen(dest);
	l2 = strlen(src);
	if (n <= l2)
	{
	for (i = 0; i < n; i++)
	{
		dest[i + l1] = src[i];
	}
	dest[n + l1] = '\0';
	return (dest);
	}
	else
	{
		for (i = 0; i < l2; i++)
		{
			dest[i + l1] = src[i];
		}
		dest[l2 + l1] = '\0';
		return (dest);
	}
}
