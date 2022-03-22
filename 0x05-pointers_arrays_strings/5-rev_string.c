#include "main.h"
#include <string.h>
/**
 * rev_string - reverses the string
 * @s: string input
 */
void rev_string(char *s)
{
	int i, j;

	i = strlen(s);
	for (j = 0; j < i / 2; j++)
	{
		char ch = s[j];

		s[j] = s[i - 1 - j];
		s[i - 1 - j] = ch;
	}
}
