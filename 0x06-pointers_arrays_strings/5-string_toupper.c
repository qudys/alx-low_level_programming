#include "main.h"
/**
 * string_toupper - change lowercase letters of a string to uppercase
 * @s: string to change
 * Return: pointer to the resulting string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			int j = s[i] - 32;

			s[i] = j;
		}
	}
	return (s);
}
