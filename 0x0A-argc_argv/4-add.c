#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that adds input integers
 * @argc: argument count
 * @argv: array of string arguments
 * Return: 0 if success and 1 if error
 */
int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;
	j = 0;
	if (argc >= 1)
	{
	for (i = 1; i < argc; i++)
	{
		if (argv[i] != 0 && atoi(argv[i]) == 0)
		{
			j = 1;
			break;
		}
		sum += atoi(argv[i]);
	}
	if (j == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
	}
	else
		printf("0\n");
	return (0);
}
