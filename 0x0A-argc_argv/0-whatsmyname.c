#include <stdio.h>
#include <stdlib.h>
/**
 * main - print name of program
 * @argc: argument count
 * @argv: array of string arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
