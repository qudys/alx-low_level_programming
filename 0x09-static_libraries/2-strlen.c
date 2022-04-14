#include "main.h"
/**
 * _strlen - calculates the length of the passed string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
