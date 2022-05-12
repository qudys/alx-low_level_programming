#include <stdio.h>
/**
 * print_to_98 - print the integer until 98.
 * @n: the number to print until it reaches 98.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
			printf(",");
			printf(" ");
			}
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			n--;
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		printf("\n");
	}
}
