#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 success
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
