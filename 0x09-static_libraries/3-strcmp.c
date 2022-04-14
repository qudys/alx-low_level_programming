#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string input
 * @s2: second string
 * Return: ascii difference of different strings or same
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}
