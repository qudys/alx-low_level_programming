#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy the string to newly allocated space in memory
 * @str: string input
 * Return: pointer to the newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * (strlen(str) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(str) + 1; i++)
		s[i] = str[i];
	return (s);
}
