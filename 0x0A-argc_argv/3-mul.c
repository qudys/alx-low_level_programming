#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that multiplies two integers
 * @argc: argument count
 * @argv: array of string arguments
 * Return: 0 if success and 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i, mul;

		mul = 1;
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
