#include <stdlib.h>
#include <stdio.h>
/**
 * main - print number of arguments passed into it
 * @argc: argument count
 * @argv: arrays of string arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (i = 0; argv[i] != NULL; i++)
			;
		printf("%d\n", i - 1);
	}
	return (0);
}
