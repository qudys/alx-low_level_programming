#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(strlen(s1) + strlen(s2) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];
	for (i = strlen(s1); i <= strlen(s1) + strlen(s2); i++)
		s[i] = s2[i - strlen(s1)];
	return (s);
}
