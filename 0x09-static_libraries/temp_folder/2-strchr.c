#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @c: char to be located
 * @s: string in the question
 * Return: pointer to the located string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
