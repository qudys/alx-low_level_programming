#include <stdio.h>
/**
 * main - program that prinrs all string arguments
 * @argc: argument count
 * @argv: array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
