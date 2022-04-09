#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of string 2
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
	{
		s = malloc(strlen(s1) + strlen(s2) + 1);
		if (s == NULL)
			return (NULL);
		for (i = 0; i < strlen(s1); i++)
			s[i] = s1[i];
		for (i = 0; i < strlen(s2); i++)
			s[strlen(s1) + i] = s2[i];
		s[strlen(s1) + strlen(s2)] = '\0';
		return (s);
	}
	else
	{
		s = malloc(strlen(s1) + n + 1);
		if (s == NULL)
			return (NULL);
		for (i = 0; i < strlen(s1); i++)
			s[i] = s1[i];
		for (i = 0; i < n; i++)
			s[strlen(s1) + i] = s2[i];
		s[strlen(s1) + n] = '\0';
		return (s);
	}
}
